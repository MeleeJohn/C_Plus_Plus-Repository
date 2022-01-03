#include "Equipment.h"
#include <fstream>
#include <iostream>
void Equipment::getBasicEquipmentInfo(std::ofstream& CurrentFile)
{
	if (CurrentFile.is_open()) {
		CurrentFile << EquipmentName << std::endl;
	}
	std::cout << EquipmentName << std::endl;
}
