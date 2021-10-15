#include "Weapon.h"

Weapon::Weapon()
{
    m_name = "Fists";
    m_description = "Bare hands of the gladiator";
    m_minDmg = 1;
    m_maxDmg = 2;
    m_materialQuality = 0;
    m_weaponsmithSkill = 0;
    m_price = 0;
    m_requiredStr = 0;
    m_requiredAgi = 0;
    m_isConsumable = false;
    m_amount = 0;
}

Weapon::Weapon(std::string name, std::string description, int minDmg, int maxDmg, int materialQuality, int weaponsmithSkill, int price, int requiredStr, int requiredAgi, bool isConsumable, int amount)
{
    this->m_name = name;
    this->m_description = description;
    this->m_minDmg = minDmg;
    this->m_maxDmg = maxDmg;
    this->m_materialQuality = materialQuality;
    this->m_weaponsmithSkill = weaponsmithSkill;
    this->m_price = price;
    this->m_requiredStr = requiredStr;
    this->m_requiredAgi = requiredAgi;
    this->m_isConsumable = isConsumable;
    this->m_amount = amount;
}

Weapon::~Weapon()
{
    //dtor
}
