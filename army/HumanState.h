#pragma once
#include <iostream>

#include "State.h"

class HumanState : public State
{
public:
    HumanState() = default;
    HumanState(Unit* inMasterUnit);

    void pAttack(Unit* inEnemy) override;
    void takeAttack(Unit* inEnemy) override;
    void counterAttack(Unit* inEnemy) override;
    void takeCounterAttack(Unit* inEnemy) override;
    void print() override;
    void setMasterUnit(Unit* inUnit) override;

private:
    Unit* m_masterUnit;
    // Attack* m_attack;
};
