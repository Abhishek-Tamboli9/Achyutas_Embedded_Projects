#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<errno.h>
#include<stdlib.h>
#include<string.h>
#include<sys/ioctl.h>
#include<linux/i2c-dev.h>
#include<time.h>

#define SLAVE_ADDRESS 0x76
#define I2C_DEVICE "/dev/i2c-2"

void BMP_INIT();
void BMP_READ(unsigned int*);

int main()
{
	unsigned int pressure;
	BMP_INIT();
	while(1)
	{
		printf("----- BMP280 Reading -----\n");
		BMP_READ(&pressure);
		printf("\nInside main --> Pressure:%u\n",pressure);
		sleep(1);
	}
	return 0;
}

void BMP_INIT()
{
	int fd, wr_fd, rd_fd, dev;
	char configure[2];

	fd = open("I2C_DEVICE",O_RDWR);
	if(fd < 0)
	{
		perror("/dev/i2c-2:");
		exit(0);
	}
	
	dev = ioctl(fd,I2C_SLAVE,SLAVE_ADDRESS);
	if(dev < 0)
	{
		perror("Device dosen't exist!!!:");
		exit(0);
	}
	
	/*	Register 0xf4	*/
	configure[0] = 0xf4;
	configure[1] = 0x05;
	wr_fd = write(fd,configure,2);
	if(wr_fd < 0)
	{
		perror("Failed to write to register!!!:");
		exit(0);
	}
	close(fd);
}

void BMP_READ(unsigned int* p)
{
	int fd, wr_fd, rd_fd, dev;
	char data_reg[1],data[2];

	fd = open("I2C_DEVICE",O_RDWR);
	if(fd < 0)
	{
		perror("/dev/i2c-2:");
		exit(0);
	}
	
	dev = ioctl(fd,I2C_SLAVE,SLAVE_ADDRESS);
	if(dev < 0)
	{
		perror("Device dosen't exist!!!:");
		exit(0);
	}

	data_reg[0] = 0xf7;
	wr_fd = write(fd, data_reg,1);
	if(wr_fd < 0)
	{
		perror("Failed to write to register!!!:");
		exit(0);
	}
	
	rd_fd = read(fd, data, 2);
	if(rd_fd < 0)
	{
		perror("Failed to read from register!!!:");
		exit(0);
	}
	for(int i =0;i<2; i++)
	{
		printf("\nReading direct from register\nvalue[i]:%u ",data[i]);
	}	

	*p = (((unsigned int)data[1] << 8) | ((unsigned int)data[0]));

	close(fd);
}
