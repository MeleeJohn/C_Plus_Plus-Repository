#pragma once
#include <string>
class WeaponParent
{
private:
	
	std::string damageType;
	std::string weaponName;
	int damageDiceAmount;
	int damageDiceType;
	int damageModifiers;


public:
	
	
	int MakeDamageRoll();
	void getWeaponInfo();
	void setWeaponName(std::string);
	void setDamageType(std::string);
	void setWeaponDice(int, int, int);
};

