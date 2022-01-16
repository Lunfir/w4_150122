#include "Werewolf.h"

Werewolf::Werewolf(std::string inName, int inHp, int inPDamage)
{
    this->m_hp = inHp;
    this->m_pDamage = inPDamage;
    this->m_name = inName;
}

Werewolf::~Werewolf()
{

}

void Werewolf::pAttack(Unit* inEnemy)
{

}

void Werewolf::takeAttack(Unit* inEnemy)
{

}

void Werewolf::counterAttack(Unit* inEnemy)
{

}

void Werewolf::print()
{
    std::cout << "======================" << std::endl;
    std::cout   << "name:    " << this->m_name << "\n"
                << "hp:      " << this->m_hp << "\n"
                << "pDamage: " << this->m_pDamage << std::endl;
}

int Werewolf::getHp() const
{
    return this->m_hp;
}

void Werewolf::setHp(int inHp)
{
    this->m_hp = inHp;
}

int Werewolf::getPhysDamage() const
{
    return this->m_pDamage;
}

void Werewolf::setPhysDamage(int inDamage)
{
    this->m_pDamage = inDamage;
}

const std::string& Werewolf::getName() const
{
    return this->m_name;
}

void Werewolf::setName(std::string inName)
{
    this->m_name = inName;
}