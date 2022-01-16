#include "WolfState.h"

WolfState::WolfState(Unit* inMasterUnit)
{
    this->m_masterUnit = inMasterUnit;
}

void WolfState::pAttack(Unit* inEnemy)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;

    // if (!(dynamic_cast<VampireState*>(inEnemy->getState())))
    // {
    inEnemy->switchState(new WolfState());
    // }
}

void WolfState::takeAttack(Unit* inEnemy)
{

}

void WolfState::counterAttack(Unit* inEnemy)
{

}

void WolfState::takeCounterAttack(Unit* inEnemy)
{
    
}

void WolfState::print()
{
    std::cout << "======================" << std::endl;
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    std::cout   << "name:    " << m_masterUnit->getName() << "\n"
                << "hp:      " << m_masterUnit->getHp() << "\n"
                << "pDamage: " << m_masterUnit->getPhysDamage() << std::endl;
}

void WolfState::setMasterUnit(Unit* inUnit)
{
    this->m_masterUnit = inUnit;
}
