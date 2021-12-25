#include "Character.h"
#include <random>
#include <iostream>
#include <vector>

Character::Character(std::string characterRacei, std::string characterClassi, std::string characterAlignmenti) {
		
	srand(time(0));
	characterRace = characterRacei;
	characterClass = characterClassi;
	characterAlignment = characterAlignmenti;
	pickStats();
}

void Character::setName(std::string namei) {
	characterName = namei;
}

int Character::SetHealth()
{
	return 0;
}

void Character::PickEquipment()
{

}

int Character::pickStats()
{
	for (int i = 0; i <= 6; i++) {
		switch (i) {
			default:
				break;
		case 1:
			Strength = rand() % 20 + 1;
			StrengthMod = pickModifiers(Strength);
			statsArray.push_back(Strength);
			modsArray.push_back(StrengthMod);
			break;

		case 2:
			Dexterity = rand() % 20 + 1;
			DexterityMod = pickModifiers(Dexterity);
			statsArray.push_back(Dexterity);
			modsArray.push_back(DexterityMod);
			break;

		case 3:
			Constitution = rand() % 20 + 1;
			ConstitutionMod = pickModifiers(Constitution);
			statsArray.push_back(Constitution);
			modsArray.push_back(ConstitutionMod);
			break;

		case 4:
			Intelligence = rand() % 20 + 1;
			IntelligenceMod = pickModifiers(Intelligence);
			statsArray.push_back(Intelligence);
			modsArray.push_back(IntelligenceMod);
			break;

		case 5:
			Wisdom = rand() % 20 + 1;
			WisdomMod = pickModifiers(Wisdom);
			statsArray.push_back(Wisdom);
			modsArray.push_back(WisdomMod);
			break;

		case 6:
			Charisma = rand() % 20 + 1;
			CharismaMod = pickModifiers(Charisma);
			statsArray.push_back(Charisma);
			modsArray.push_back(CharismaMod);
			break;
		}
	}
	return 0;
}

int Character::pickModifiers(int baseStat) {
	int tempMod = 0;
	
	if (baseStat > 11) {
		if (baseStat == 12 || baseStat == 13) {
			tempMod = 1;
		} else if (baseStat == 14 || baseStat == 15) {
			tempMod = 2;
		} else if (baseStat == 16 || baseStat == 17) {
			tempMod = 3;
		} else if (baseStat == 18 || baseStat == 19) {
			tempMod = 4;
		} else if (baseStat == 20) {
			tempMod = 5;
		}
	}
	else if (baseStat < 10) {
		if (baseStat == 8 || baseStat == 9) {
			tempMod = -1;
		}
		else if (baseStat == 6 || baseStat == 7) {
			tempMod = -2;
		}
		else if (baseStat == 4 || baseStat == 5) {
			tempMod = -3;
		}
		else if (baseStat == 2 || baseStat == 3) {
			tempMod = -4;
		}
		else if (baseStat == 4) {
			tempMod = -5;
		}
	} else {
		tempMod = 0;
	}
	return tempMod;
}

int Character::makeRoll(int dieType, int modifier, int amountOfDie)
{
	int tempRoll = 0;
	for (int i = 0; i < amountOfDie; i++) {
		tempRoll = modifier + (rand() % dieType + 1);
		std::cout << "You rolled a " << tempRoll << std::endl;
	}
	
	return tempRoll;
}

void Character::printCharacterSheet() {
	
	std::cout << characterName << "'s Character Sheet" << std::endl;
	std::cout << std::endl;
	std::cout << characterRace << std::endl;
	std::cout << characterClass << std::endl;
	std::cout << characterAlignment << std::endl;
	std::cout << std::endl;

	std::cout << "               Stat  " << "  Mod  "  << std::endl;
	for (int i = 0; i < statsArray.size(); i++) {
		switch (i)
		{
		default:
			break;

		case 0:
			std::cout << "Strength        " << statsArray[i] << "      " << modsArray[i] << std::endl;
			break;

		case 1:
			std::cout << "Dexterity       " << statsArray[i] << "      " << modsArray[i] << std::endl;
			break;

		case 2:
			std::cout << "Constitution    " << statsArray[i] << "      " << modsArray[i] << std::endl;
			break;

		case 3:
			std::cout << "Intelligence    " << statsArray[i] << "      " << modsArray[i] << std::endl;
			break;

		case 4:
			std::cout << "Wisdom          " << statsArray[i] << "      " << modsArray[i] << std::endl;
			break;

		case 5:
			std::cout << "Charism         " << statsArray[i] << "      " << modsArray[i] << std::endl;
			break;
		}
		
	}

	std::cout << std::endl;
}
