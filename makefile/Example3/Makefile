$(CC) = gcc

final: hello.o qwerty.o name.o
	$(CC) hello.o qwerty.o name.o -o final

hello.o: hello.c
	$(CC) -c hello.c -o hello.o

qwerty.o: qwerty.c
	$(CC) -c qwerty.c -o qwerty.o

name.o: name.c
	$(CC) -c name.c -o name.o

clean:
	rm *.o final

