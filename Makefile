# Write this Makefile
main.o: main.c
	gcc -c main.c	
trans.o: trans.c
	gcc -c trans.c
check.o: check.c
	gcc -c check.c
myas: main.o trans.o check.o
	gcc -o myas main.o trans.o check.o -lm
clean:
	rm -f main.o trans.o check.o myas

