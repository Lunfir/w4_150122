all: unit werewolf soldier main
	g++ *.o -o main.exe

unit: Unit.cpp
	g++ -c Unit.cpp -o Unit.o

werewolf: Werewolf.cpp
	g++ -c Werewolf.cpp -o Werewolf.o

soldier: Soldier.cpp
	g++ -c Soldier.cpp -o Soldier.o

main: main.cpp
	g++ -c main.cpp -o main.o

clear:
	rm *.o *.exe
