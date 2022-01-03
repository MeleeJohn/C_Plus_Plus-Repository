#pragma once
#include <string>

class Equipment
{
	//A piece of equipment is a weapon and a weapon is a greatsword
	//A piece of equipment can also be a set of armor
	public:
		std::string EquipmentName;
		std::string EquipmentType;
		void getBasicEquipmentInfo(std::ofstream&);
};

