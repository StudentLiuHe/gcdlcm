main:main.o gcdlcm.o
	gcc main.o gcdlcm.o -o main
main.o:main.c
	gcc -c main.c
calculator.o:gcdlcm.c
	gcc -c gcdlcm.c

clean:
	rm main *.o

