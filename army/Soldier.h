#pragma once
#include <iostream>
#include <string>

#include "Unit.h"

class Soldier : public Unit
{
public:
    Soldier(std::string inName, int inHp, int inPDamage);
    virtual ~Soldier();

    int getHp() const;
    void setHp(int inHp);

    int getPhysDamage() const;
    void setPhysDamage(int inDamage);

    const std::string& getName() const;
    void setName(std::string inName);

    // behaviour
    void pAttack(Unit* inEnemy) override;
    void takeAttack(Unit* inEnemy) override;
    void counterAttack(Unit* inEnemy) override;
    void print();

protected:
    int m_hp;
    int m_pDamage;
    std::string m_name;
};
