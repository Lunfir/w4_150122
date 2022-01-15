#include "Animal.h"

Animal::Animal()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Animal::~Animal()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void Animal::eat()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void Animal::protectedMethod()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void Animal::privateMethod()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}
