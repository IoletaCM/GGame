#include "Gladiator.h"

Gladiator::Gladiator()
{
    m_name = "Name";
    m_hp = 50;
    m_stamina = 50;
    m_armor = 0;
    m_speed = 150;
    m_skill = 50;
    m_agility = 50;
    m_strength = 50;
    m_perception = 0; //From 0 to 6 --> 0 = Blind / 1 = One-Eyed / 2 = Careless / 3 = Average / 4 = Watchful / 5 = Sixth sense / 6 = Omniscient
    m_cardio = 50;
    m_charisma = 50;
    m_weapon = new Weapon();
}

Gladiator::~Gladiator()
{
    delete m_weapon;
}

int Gladiator::DmgGenerator()
{
    std::random_device rand_dev;
    std::mt19937 generator(rand_dev());
    std::uniform_int_distribution<int> distr(m_weapon->GetMinDmg(), m_weapon->GetMaxDmg());

    return distr(generator);
}

void Gladiator::Attack(Gladiator *target)
{
    target->Sethp(target->Gethp() - DmgGenerator());
}
