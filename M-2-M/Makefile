all: user article manager main
	g++ *.o -o main.exe

user: User.cpp
	g++ -c User.cpp -o User.o

article: Article.cpp
	g++ -c Article.cpp -o Article.o

manager:  Manager.cpp
	g++ -c Manager.cpp -o Manager.o

main: main.cpp
	g++ -c main.cpp -o main.o

clear:
	rm *.o *.exe
