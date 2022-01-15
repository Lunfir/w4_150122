#include "Cat.h"

Cat::Cat()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Cat::~Cat()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void Cat::eat()
{
    Animal::eat();
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}
