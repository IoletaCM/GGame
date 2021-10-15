#ifndef WEAPON_H
#define WEAPON_H
#include <string>


class Weapon
{
    public:
        Weapon();
        Weapon(std::string name, std::string description, int minDmg, int maxDmg, int materialQuality, int weaponsmithSkill, int price, int requiredStr, int requiredAgi, bool isConsumable, int amount);
        virtual ~Weapon();

        std::string GetName() { return m_name; }
        void SetName(std::string val) { m_name = val; }
        std::string GetDescription() { return m_description; }
        void SetDescription(int val) { m_description = val; }
        int GetMinDmg() { return m_minDmg; }
        void MinDmg(int val) { m_minDmg = val; }
        int GetMaxDmg() { return m_maxDmg; }
        void SetMaxDmg(int val) { m_maxDmg = val; }
        int GetMaterialQuality() { return m_materialQuality; }
        void SetMaterialQuality(int val) { m_materialQuality = val; }
        int GetWeaponsmithSkill() { return m_weaponsmithSkill; }
        void SetWeaponsmithSkill(int val) { m_weaponsmithSkill = val; }
        int GetPrice() { return m_price; }
        void SetPrice(int val) { m_price = val; }
        int GetRequiredStr() { return m_requiredStr; }
        void SetRequiredStr(int val) { m_requiredStr = val; }
        int GetRequiredAgi() { return m_requiredAgi; }
        void SetRequiredAgi(int val) { m_requiredAgi = val; }
        int GetIsConsumable() { return m_isConsumable; }
        void SetIsConsumable(int val) { m_isConsumable = val; }
        int GetAmount() { return m_amount; }
        void SetAmount(int val) { m_amount = val; }

    protected:

    private:
        std::string m_name;
        std::string m_description;
        int m_minDmg;
        int m_maxDmg;
        int m_materialQuality;
        int m_weaponsmithSkill;
        int m_price;
        int m_requiredStr;
        int m_requiredAgi;
        bool m_isConsumable;
        int m_amount;
};

#endif // WEAPON_H
