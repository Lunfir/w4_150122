#include "Werewolf.h"

Werewolf::Werewolf(std::string inName, int inHp, int inPDamage)
{
    this->m_hp = inHp;
    this->m_pDamage = inPDamage;
    this->m_name = inName;
    this->m_state = new HumanState(this);
}

Werewolf::~Werewolf()
{
    delete m_state;
}

void Werewolf::switchState(State* inNewState)
{
    State* tmpPointer = m_state;

    m_state = inNewState;
    m_state->setMasterUnit(this);

    delete tmpPointer;
}

void Werewolf::pAttack(Unit* inEnemy)
{
    m_state->pAttack(inEnemy);
}

void Werewolf::takeAttack(Unit* inEnemy)
{
    m_state->takeAttack(inEnemy);
}

void Werewolf::counterAttack(Unit* inEnemy)
{
    m_state->counterAttack(inEnemy);
}

void Werewolf::takeCounterAttack(Unit* inEnemy)
{
    m_state->takeCounterAttack(inEnemy);
}

void Werewolf::print()
{
    m_state->print();
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

State* Werewolf::getState() const
{
    return m_state;
}

void Werewolf::transform()
{
    HumanState* state = dynamic_cast<HumanState*>(m_state);
    if (state == nullptr)
    {
        // wolf state now
        switchState(new HumanState());
    }
    else
    {
        switchState(new WolfState());
    }
}