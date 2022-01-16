#include "Soldier.h"

Soldier::Soldier(std::string inName, int inHp, int inPDamage)
{
    this->m_hp = inHp;
    this->m_pDamage = inPDamage;
    this->m_name = inName;
}

Soldier::~Soldier()
{

}

void Soldier::pAttack(Unit* inEnemy)
{

}

void Soldier::takeAttack(Unit* inEnemy)
{

}

void Soldier::counterAttack(Unit* inEnemy)
{

}

void Soldier::print()
{
    std::cout << "======================" << std::endl;
    std::cout   << "name:    " << this->m_name << "\n"
                << "hp:      " << this->m_hp << "\n"
                << "pDamage: " << this->m_pDamage << std::endl;
}

int Soldier::getHp() const
{
    return this->m_hp;
}

void Soldier::setHp(int inHp)
{
    this->m_hp = inHp;
}

int Soldier::getPhysDamage() const
{
    return this->m_pDamage;
}

void Soldier::setPhysDamage(int inDamage)
{
    this->m_pDamage = inDamage;
}

const std::string& Soldier::getName() const
{
    return this->m_name;
}

void Soldier::setName(std::string inName)
{
    this->m_name = inName;
}