#include "HumanState.h"

HumanState::HumanState(Unit* inMasterUnit)
{
    this->m_masterUnit = inMasterUnit;
    if (dynamic_cast<SpellCaster*>(this->m_masterUnit))
    {
        this->m_attack->m_mAttack = MAttack();
    }

    this->m_attack->m_pAttack = PAttack();
}

void HumanState::pAttack(Unit* inEnemy)
{
    // std::cout << "======================" << std::endl;
    // std::cout << __PRETTY_FUNCTION__ << std::endl;

    // inEnemy->takeAttack(this->m_masterUnit);

    m_attack->performAttack();
}

void HumanState::takeAttack(Unit* inEnemy)
{
    int currHp = this->m_masterUnit->getHp(); // current hp
    int enemyDmg = inEnemy->getPhysDamage(); // enemy damage
    currHp -= enemyDmg;

    this->m_masterUnit->setHp(currHp);

    if (this->m_masterUnit->getHp() <= 0)
    {
        std::cout << this->m_masterUnit->getName() << " is dead..." << std::endl;

        return; 
    }

    counterAttack(inEnemy);
}

void HumanState::counterAttack(Unit* inEnemy)
{
    // if (dynamic_cast<Rogue*>(inEnemy))
    // {
    //     return;
    // }

    inEnemy->takeCounterAttack(this->m_masterUnit);
}

void HumanState::takeCounterAttack(Unit* inEnemy)
{
    int currHp = this->m_masterUnit->getHp(); // current hp
    int enemyDmg = inEnemy->getPhysDamage() / 2; // enemy damage
    currHp -= enemyDmg;

    this->m_masterUnit->setHp(currHp);

    if (this->m_masterUnit->getHp() <= 0)
    {
        std::cout << this->m_masterUnit->getName() << " is dead..." << std::endl;

        return; 
    }
}

void HumanState::print()
{
    std::cout << "======================" << std::endl;
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    std::cout   << "name:    " << m_masterUnit->getName() << "\n"
                << "hp:      " << m_masterUnit->getHp() << "\n"
                << "pDamage: " << m_masterUnit->getPhysDamage() << std::endl;
}

void HumanState::setMasterUnit(Unit* inUnit)
{
    this->m_masterUnit = inUnit;
}