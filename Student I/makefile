main: main.o student.o content.o
	g++ -o main main.o content.o student.o

main.o: main.cpp student.h content.h
	g++ -c main.cpp

content.o: content.cpp content.h student.h
	g++ -c content.cpp

student.o: student.cpp student.h
	g++ -c student.cpp