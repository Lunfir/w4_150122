#include <iostream>
#include "Cat.h"
#include "Dog.h"

int main()
{
    Cat cat;
    Dog dog;

    cat.Animal::eat();
    dog.eat();
    
    return 0;
}