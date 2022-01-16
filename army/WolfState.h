#pragma once
#include <iostream>

#include "State.h"

class WolfState : public State
{
public:
    WolfState() = default;
    WolfState(Unit* inMasterUnit);

    void pAttack(Unit* inEnemy) override;
    void takeAttack(Unit* inEnemy) override;
    void counterAttack(Unit* inEnemy) override;
    void takeCounterAttack(Unit* inEnemy) override;
    void print() override;
    void setMasterUnit(Unit* inUnit) override;

private:
    Unit* m_masterUnit;
};