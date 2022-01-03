#include "Weapon.h"
#include <iostream>
#include <fstream>

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

void Weapon::getWeaponInfo(std::ofstream& CurrentFile)
{
    //std::ofstream outFile;
    //outFile.open(fileName.append(".txt"));

    if (CurrentFile.is_open()) {
        CurrentFile << std::endl;
        getBasicEquipmentInfo(CurrentFile);
        CurrentFile << damageType << std::endl;
        CurrentFile << "Damage roll: " << damageDiceAmount << "d" << damageDiceType << "+" << damageModifiers << std::endl;
    }
    else {
        
    }
    //Print out all wepaon stats fro player consumption
    
    std::cout << damageType << std::endl;
    std::cout << "Damage roll: " << damageDiceAmount << "d" << damageDiceType << "+" << damageModifiers << std::endl;

}
