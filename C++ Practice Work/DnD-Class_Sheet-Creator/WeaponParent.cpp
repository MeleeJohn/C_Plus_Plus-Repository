#include "WeaponParent.h"
#include <iostream>

void WeaponParent::setWeaponName(std::string namei)
{
    weaponName = namei;
}

void WeaponParent::setDamageType(std::string damageTypei)
{
    damageType = damageTypei;
}

void WeaponParent::setWeaponDice(int DiceAmounti, int DiceTypei, int Modifiersi)
{
    damageDiceAmount = DiceAmounti;
    damageDiceType = DiceTypei;
    damageModifiers = Modifiersi;
}

int WeaponParent::MakeDamageRoll()
{
    return 0;
}

void WeaponParent::getWeaponInfo()
{
    //Print out all wepaon stats fro player consumption
    std::cout << weaponName << std::endl;
    std::cout << damageType << std::endl;
}
