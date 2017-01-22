CC=g++
OBJT=pdshow.o pdlist.o pdadd.o pdremove.o Entity.o Dairy.o
OBJT1=pdadd.o Entity.o Dairy.o
OBJT2=pdremove.o Entity.o Dairy.o
OBJT3=pdlist.o Entity.o Dairy.o
OBJT4=pdshow.o Entity.o Dairy.o
all : pdadd pdremove pdlist pdshow

.PHONY : all

pdshow: $(OBJT4)
	$(CC) -o pdshow $(OBJT4)
pdshow.o: pdshow.cpp Entity.h Dairy.h
	$(CC) -c pdshow.cpp

pdlist: $(OBJT3)
	$(CC) -o pdlist $(OBJT3)
pdlist.o: pdlist.cpp Entity.h Dairy.h
	$(CC) -c pdlist.cpp
pdremove: $(OBJT2)
	$(CC) -o pdremove $(OBJT2)
pdremove.o: pdremove.cpp Entity.h Dairy.h
	$(CC) -c pdremove.cpp
pdadd: $(OBJT1)
	$(CC) -o pdadd $(OBJT1)
pdadd.o: pdadd.cpp Entity.h Dairy.h
	$(CC) -c pdadd.cpp
Entity.o: Entity.cpp Entity.h
	$(CC) -c Entity.cpp
Dairy.o: Dairy.cpp Dairy.h Entity.h
	$(CC) -c Dairy.cpp
clean :	
	rm  $(OBJT)