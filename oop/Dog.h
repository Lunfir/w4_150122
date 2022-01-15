#pragma once
#include <iostream>
#include "Animal.h"

class Dog : virtual public Animal
{
public:
    Dog();
    ~Dog();

    // void eat();
};