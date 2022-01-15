#pragma once
#include <iostream>
#include "Cat.h"
#include "Dog.h"

class CatDog : public Cat, public Dog
{
public:
    CatDog();
    ~CatDog();

    // void eat();
};