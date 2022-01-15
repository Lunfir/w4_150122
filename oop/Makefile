all: animal cat dog catdog main
	g++ *.o -o main.exe

animal: Animal.cpp
	g++ -c Animal.cpp -o Animal.o

cat: Cat.cpp
	g++ -c Cat.cpp -o Cat.o

dog: Dog.cpp
	g++ -c Dog.cpp -o Dog.o

catdog: CatDog.cpp
	g++ -c CatDog.cpp -o CatDog.o 

main: main.cpp
	g++ -c main.cpp -o main.o

clear:
	rm *.o *.exe
