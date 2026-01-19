Caesar : main.o display.o caesar.o
	gcc main.o display.o caesar.o -o Caesar

main.o : main.c display.h caesar.h
	gcc -Wall -c main.c

display.o : display.c display.h
	gcc -Wall -c display.c

ceasar.o : caesar.c caesar.h
	gcc -Wall -c caesar.c

clean :
	rm *.o Caesar
