all: animal main
	g++ Animal.o main.o -o main.exe

animal: Animal.cpp
	g++ -c Animal.cpp -o Animal.o

main: main.cpp
	g++ -c main.cpp -o main.o

clear:
	rm *.o *.exe
