CC ?= gcc

all:bmp_main.o
	echo "BMP280 object file created"

bmp_main.o:bmp280.c bmp280_defs.h bmp280.h bmp_c.h bmp_commons.c bmp_main.c
	$(CC) -c bmp280.c bmp280_defs.h bmp280.h bmp_c.h bmp_commons.c bmp_main.c

clean:
	rm *.o
	rm *.gch

