#include "Weapon.h"

Weapon::Weapon()
{
    m_name = "Weapon";
    m_description = "Weapon generic";
    m_minDmg = 0;
    m_maxDmg = 0;
    m_materialQuality = 0;
    m_weaponsmithSkill = 0;
    m_price = 0;
    m_requiredStr = 0;
    m_requiredAgi = 0;
    m_isConsumable = false;
    m_amount = 0;
}

Weapon::Weapon(string name, string description,){

}

Weapon::~Weapon()
{
    //dtor
}
