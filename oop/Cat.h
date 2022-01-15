#pragma once
#include <iostream>
#include "Animal.h"

class Cat : virtual public Animal
{
public:
    Cat();
    ~Cat() override;

    // void eat();
};