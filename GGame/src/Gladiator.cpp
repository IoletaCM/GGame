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
}

Gladiator::~Gladiator()
{
    //dtor
}
