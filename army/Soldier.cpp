#include "Soldier.h"

Soldier::Soldier(std::string inName, int inHp, int inPDamage)
{
    this->m_hp = inHp;
    this->m_pDamage = inPDamage;
    this->m_name = inName;
    this->m_state = new HumanState(this);
}

Soldier::~Soldier()
{
    delete m_state;
}

void Soldier::switchState(State* inNewState)
{
    State* tmpPointer = m_state;

    m_state = inNewState;
    m_state->setMasterUnit(this);

    delete tmpPointer;
}

void Soldier::pAttack(Unit* inEnemy)
{
    m_state->pAttack(inEnemy);
}

void Soldier::takeAttack(Unit* inEnemy)
{
    m_state->takeAttack(inEnemy);
}

void Soldier::counterAttack(Unit* inEnemy)
{
    m_state->counterAttack(inEnemy);
}

void Soldier::takeCounterAttack(Unit* inEnemy)
{
    m_state->takeCounterAttack(inEnemy);
}

void Soldier::print()
{
    m_state->print();
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

State* Soldier::getState() const
{
    return m_state;
}

void Soldier::setName(std::string inName)
{
    this->m_name = inName;
}