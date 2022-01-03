#include "ShortSword.h"

void ShortSword::InitializeShortSword()
{
	EquipmentName = "Demascus";
	EquipmentType = "Short Sword";
	setWeaponDice(2, 4, 1);
	setDamageType("Slashing and Stabbing");
}
