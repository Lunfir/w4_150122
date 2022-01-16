#pragma once
#include <iostream>
#include <string>

#include "Unit.h"
#include "HumanState.h"

class Soldier : public Unit
{
public:
    Soldier(std::string inName, int inHp, int inPDamage);
    virtual ~Soldier();

    int getHp() const override;
    void setHp(int inHp) override;

    int getPhysDamage() const override;
    void setPhysDamage(int inDamage);

    const std::string& getName() const override;
    void setName(std::string inName);

    // behaviour
    State* getState() const override;
    void switchState(State* inNewState) override;

    void pAttack(Unit* inEnemy) override;
    void takeAttack(Unit* inEnemy) override;

    void counterAttack(Unit* inEnemy) override;
    void takeCounterAttack(Unit* inEnemy) override;
    
    void print() override;

protected:
    int m_hp;
    int m_pDamage;
    std::string m_name;

    State* m_state;
};
