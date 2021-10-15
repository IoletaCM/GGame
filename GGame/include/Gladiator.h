#ifndef GLADIATOR_H
#define GLADIATOR_H
#include "Weapon.h"
#include <random>


class Gladiator
{
    public:
        Gladiator();
        virtual ~Gladiator();
        int DmgGenerator();
        void Attack(Gladiator *target);

        std::string Getname() { return m_name; }
        void Setname(std::string val) { m_name = val; }
        int Gethp() { return m_hp; }
        void Sethp(int val) { m_hp = val; }
        int Getstamina() { return m_stamina; }
        void Setstamina(int val) { m_stamina = val; }
        int Getarmor() { return m_armor; }
        void Setarmor(int val) { m_armor = val; }
        int Getspeed() { return m_speed; }
        void Setspeed(int val) { m_speed = val; }
        int Getskill() { return m_skill; }
        void Setskill(int val) { m_skill = val; }
        int Getagility() { return m_agility; }
        void Setagility(int val) { m_agility = val; }
        int Getstrength() { return m_strength; }
        void Setstrength(int val) { m_strength = val; }
        int Getperception() { return m_perception; }
        void Setperception(int val) { m_perception = val; }
        int Getcardio() { return m_cardio; }
        void Setcardio(int val) { m_cardio = val; }
        int Getcharisma() { return m_charisma; }
        void Setcharisma(int val) { m_charisma = val; }


    protected:

    private:
        std::string m_name;
        int m_hp;
        int m_stamina;
        int m_armor;
        int m_speed;
        int m_skill;
        int m_agility;
        int m_strength;
        int m_perception;
        int m_cardio;
        int m_charisma;
        Weapon *m_weapon;
};

#endif // GLADIATOR_H
