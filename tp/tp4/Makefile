testeParfait:testeParfait.o parfait.o
	gcc testeParfait.o parfait.o -o testeParfait
testeParfait.o: testeParfait.c parfait.h
	gcc -Wall -c testeParfait.c
parfait.o:parfait.c parfait.h
	gcc -Wall -c parfait.c
clean :
	del *.o
