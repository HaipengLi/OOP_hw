CC=g++
OBJT=main.o Course.o OOP.o

main: $(OBJT)
	$(CC) -o main $(OBJT)
main.o: main.cpp Course.h OOP.h
	$(CC) -c main.cpp
Course.o: Course.cpp Course.h
	$(CC) -c Course.cpp
OOP.o: OOP.cpp OOP.h Course.h
	$(CC) -c OOP.cpp