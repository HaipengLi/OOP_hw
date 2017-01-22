Main: Main.o Map.o Room.o Player.o
	g++ -o Main Main.o Map.o Room.o Player.o

Main.o: Main.cpp Map.h
	g++ -c Main.cpp

Map.o: Map.cpp Map.h Player.cpp Player.h Room.cpp Room.h
	g++ -c Map.cpp Player.cpp Room.cpp

Player.o: Player.cpp Player.h
	g++ -c Player.cpp
Room.o: Room.cpp Room.h
	g++ -c Room.cpp