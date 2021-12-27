#include "Weapon.h"
#include <iostream>

/*void Weapon::setWeaponName(std::string namei)
{
    Equipment::Name = namei;
}*/

void Weapon::setDamageType(std::string damageTypei)
{
    damageType = damageTypei;
}

void Weapon::setWeaponDice(int DiceAmounti, int DiceTypei, int Modifiersi)
{
    damageDiceAmount = DiceAmounti;
    damageDiceType = DiceTypei;
    damageModifiers = Modifiersi;
}

int Weapon::MakeDamageRoll()
{
    return 0;
}

void Weapon::getWeaponInfo()
{
    //Print out all wepaon stats fro player consumption
    getBasicEquipmentInfo();
    std::cout << damageType << std::endl;
    std::cout << "Damage roll: " << damageDiceAmount << "d" << damageDiceType << "+" << damageModifiers << std::endl;

}
