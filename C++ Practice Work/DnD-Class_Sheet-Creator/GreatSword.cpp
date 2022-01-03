#include "GreatSword.h"

void GreatSword::InitializeGreatSword()
{
	EquipmentName = "The Slab";
	EquipmentType = "Great Sword";
	setWeaponDice(4, 6, 3);
	setDamageType("Bludgeoning and Slashing");
}
