#pragma once
#include <iostream>

class Unit
{
public:
    virtual void pAttack(Unit* inEnemy) = 0;
    virtual void takeAttack(Unit* inEnemy) = 0;
    virtual void counterAttack(Unit* inEnemy) = 0;
};
