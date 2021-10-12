#ifndef WEAPON_H
#define WEAPON_H


class Weapon
{
    public:
        Weapon();
        virtual ~Weapon();

        string GetName() { return m_name; }
        void SetName(string val) { m_name = val; }
        string GetDescription() { return m_description; }
        void SetDescription(string val) { m_description = val; }
        string GetMinDmg() { return m_minDmg; }
        void MinDmg(string val) { m_minDmg = val; }
        string GetMaxDmg() { return m_maxDmg; }
        void SetMaxDmg(string val) { m_maxDmg = val; }
        string GetMaterialQuality() { return m_materialQuality; }
        void SetMaterialQuality(string val) { m_materialQuality = val; }
        string GetWeaponsmithSkill() { return m_weaponsmithSkill; }
        void SetWeaponsmithSkill(string val) { m_weaponsmithSkill = val; }
        string GetPrice() { return m_price; }
        void SetPrice(string val) { m_price = val; }
        string GetRequiredStr() { return m_requiredStr; }
        void SetRequiredStr(string val) { m_requiredStr = val; }
        string GetRequiredAgi() { return m_requiredAgi; }
        void SetRequiredAgi(string val) { m_requiredAgi = val; }
        string GetIsConsumable() { return m_isConsumable; }
        void SetIsConsumable(string val) { m_isConsumable = val; }
        string GetAmount() { return m_amount; }
        void SetAmount(string val) { m_amount = val; }

    protected:

    private:
        string m_name;
        string m_description;
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
