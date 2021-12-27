#include "GreatSword.h"

void GreatSword::InitializeGreatSword()
{
	EquipmentName = "The Slab";
	EquipmentType = "Weapon";
	setWeaponDice(4, 6, 3);
	setDamageType("Bludgeoning and Slashing");
}
