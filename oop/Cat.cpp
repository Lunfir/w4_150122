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

void Cat::testModificators()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    Animal::protectedMethod();
    // Animal::privateMethod();
}

// void Cat::protectedMethod()
// {
//     std::cout << __PRETTY_FUNCTION__ << std::endl;
// }

// void Cat::privateMethod()
// {
//     std::cout << __PRETTY_FUNCTION__ << std::endl;
// }
