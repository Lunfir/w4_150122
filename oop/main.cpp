#include <iostream>
#include "Cat.h"
#include "Dog.h"


int main()
{
    Cat* cat = new Cat();
    Animal* catAnimal = static_cast<Animal*>(cat);
    Cat* catCat = dynamic_cast<Cat*>(catAnimal);

    Dog* dog = dynamic_cast<Dog*>(cat);
    if (dog == nullptr)
    {
        std::cout << "Cannot perform the cast..." << std::endl;
    }
    else
    {
        dog->eat();
    }

    // delete cat;
    // delete dog;


    // static_cast(); // up casts // compile time
    // dynamic_cast(); // down cast, smtimes side cast


    // reinterpret_cast(); // side casts

    // () // C-style cast

    return 0;
}