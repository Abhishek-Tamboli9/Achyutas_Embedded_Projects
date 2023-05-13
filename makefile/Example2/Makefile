final: hello.o qwerty.o name.o
	gcc hello.o qwerty.o name.o -o final

hello.o: hello.c
	gcc -c hello.c -o hello.o

qwerty.o: qwerty.c
	gcc -c qwerty.c -o qwerty.o

name.o: name.c
	gcc -c name.c -o name.o

clean:
	rm *.o final

