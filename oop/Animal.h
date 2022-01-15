#pragma once
#include <iostream>

class Animal
{
public:
    Animal();
    ~Animal();

    void eat();

protected:
    void protectedMethod();

private:
    void privateMethod();
};
