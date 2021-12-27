#pragma once
#include <string>
#include "Equipment.h"
class Weapon : public Equipment
{
private:
	
	std::string damageType;
	//std::string weaponName;
	int damageDiceAmount;
	int damageDiceType;
	int damageModifiers;


public:
	
	
	int MakeDamageRoll();
	void getWeaponInfo();
	//void setWeaponName(std::string);
	void setDamageType(std::string);
	void setWeaponDice(int, int, int);
};

