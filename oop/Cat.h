#pragma once
#include <iostream>
#include "Animal.h"

class Cat : public Animal
{
public:
    Cat();
    ~Cat();

    void eat();

    void testModificators();

// protected:
//     void protectedMethod();

// private:
//     void privateMethod();
};