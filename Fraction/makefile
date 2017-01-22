CC=g++
OBJT=main.o Fraction.o

main: $(OBJT)
	$(CC) -o main $(OBJT)
main.o: main.cpp Fraction.h
	$(CC) -c main.cpp
Fraction.o: Fraction.cpp Fraction.h
	$(CC) -c Fraction.cpp