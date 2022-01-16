#pragma once
#include <iostream>

class State;

class Unit
{
public:
    virtual void pAttack(Unit* inEnemy) = 0;
    virtual void takeAttack(Unit* inEnemy) = 0;
    virtual void counterAttack(Unit* inEnemy) = 0;
    virtual void takeCounterAttack(Unit* inEnemy) = 0;
    virtual void print() = 0;

    virtual State* getState() const = 0;
    virtual void switchState(State* inNewState) = 0;

    virtual int getHp() const = 0;
    virtual void setHp(int inHp) = 0;
    virtual int getPhysDamage() const = 0;
    virtual const std::string& getName() const = 0;
};

// class Attack
// {
// public:
//     virtual void performAttack()
//     {
//         if (m_pAttack)
//         {
//             m_pAttack->performAttack();
//         }

//         if (m_mAttack)
//         {
//             m_mAttack->performAttack();
//         }
//     };

//     PAttack* m_pAttack;
//     MAttack* m_mAttack;

//     // Soldier: m_pAttack = PAttack(), m_mAttack = nullptr;
//     // Wizard: m_pAttack = PAttack(), m_mAttack = MAttack();
// };

// class PAttack
// {
// public:
//     virtual void performAttack() 
//     {
//         unit->attack();
//         target->takeAttack();
//         target->counterAttack(unit);
//     };
// };

// class MAttack
// {
// public:
//     virtual void performAttack() 
//     {
//         unit->attack();
//         target->takeAttack();
//     };
// };
