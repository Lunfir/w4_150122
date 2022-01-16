#pragma once
#include <iostream>

#include "Unit.h"

class State
{
public:
    virtual void pAttack(Unit* inEnemy) = 0;
    virtual void takeAttack(Unit* inEnemy) = 0;
    virtual void counterAttack(Unit* inEnemy) = 0;
    virtual void takeCounterAttack(Unit* inEnemy) = 0;
    
    virtual void print() = 0;

    virtual void setMasterUnit(Unit* inUnit) = 0;
};