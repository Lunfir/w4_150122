#include <iostream>
#include "Cat.h"
#include "Dog.h"


int main()
{
    Animal* zoo[2];

    Animal* cat = new Cat();
    Animal* dog = new Dog();

    zoo[0] = cat;
    zoo[1] = dog;

    // feed
    for (int i = 0; i < 2; i++)
    {
        zoo[i]->eat();
    }

    // destroy
    for (int i = 0; i < 2; i++)
    {
        delete zoo[i];
    }

    return 0;
}