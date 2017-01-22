CC=g++
OBJT=main.o Student.o AllStudents.o

main: $(OBJT)
	$(CC) -o main $(OBJT)
main.o: main.cpp Student.h AllStudents.h
	$(CC) -c main.cpp
Student.o: Student.cpp Student.h
	$(CC) -c Student.cpp
AllStudents.o: AllStudents.cpp AllStudents.h Student.h
	$(CC) -c AllStudents.cpp