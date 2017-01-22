CC=g++
OBJT=main.o NumberDisplay.o ClockDisplay.o

main: $(OBJT)
	$(CC) -o main $(OBJT)
main.o: main.cpp NumberDisplay.h ClockDisplay.h
	$(CC) -c main.cpp
NumberDisplay.o: NumberDisplay.cpp NumberDisplay.h
	$(CC) -c NumberDisplay.cpp
ClockDisplay.o: ClockDisplay.cpp ClockDisplay.h NumberDisplay.h
	$(CC) -c ClockDisplay.cpp