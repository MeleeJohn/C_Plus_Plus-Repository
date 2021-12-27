#pragma once

#include <random>
#include <string>
#include "Equipment.h"
#include "Weapon.h"
//Basic Stats


class Character {
	private:
		std::string characterName;
		std::string characterRace;
		std::string characterClass;
		std::string characterAlignment;

		int Strength = 0;
		int StrengthMod = 0;
		int Dexterity = 0;
		int DexterityMod = 0;
		int Constitution = 0;
		int ConstitutionMod = 0;
		int Intelligence = 0;
		int IntelligenceMod = 0;
		int Wisdom = 0;
		int WisdomMod = 0;
		int Charisma = 0;
		int CharismaMod = 0;
		std::vector<int> statsArray;
		std::vector<int> modsArray;

		int Health = 0;
		int HitDie = 0;
		int ArmorClass = 0;
		std::string ArmorType;
		std::vector<Weapon> characterWeapons;


		int SetHealth();
		void PickEquipment();
		int pickStats();
		int pickModifiers(int);

	public:
		Character(std::string, std::string, std::string);
		int makeRoll(int, int, int);
		void printCharacterSheet();
		void setName(std::string);
		void getEquipment();
		void AddEquipment(Weapon);
		
};