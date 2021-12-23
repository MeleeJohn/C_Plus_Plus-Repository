#pragma once

#include <random>
#include <string>
//Basic Stats


class Character {
	private:
		std::string characterName;
		std::string characterRace;
		std::string characterClass;
		std::string characterAlignment;

		int Strength = 0;
		int StrengthMod = 0;
		int Dexterity = 1;
		int DexterityMod = 1;
		int Constitution = 2;
		int ConstitutionMod = 2;
		int Intelligence = 3;
		int IntelligenceMod = 3;
		int Wisdom = 4;
		int WisdomMod = 4;
		int Charisma = 5;
		int CharismaMod = 5;
		std::vector<int> statsArray;
		std::vector<int> modsArray;

		int Health = 0;
		int HitDie = 0;
		int ArmorClass = 0;
		std::string ArmorType;

		int SetHealth();
		void PickEquipment();
		int pickStats();
		int pickModifiers(int);

	public:
		Character(std::string, std::string, std::string);
		int makeRoll(int);
		void printCharacterSheet();
		void setName(std::string);

};