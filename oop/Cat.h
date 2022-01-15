#pragma once
#include <iostream>
#include "Animal.h"

class Cat : public Animal
{
public:
    Cat();
    ~Cat();

    void eat();
};