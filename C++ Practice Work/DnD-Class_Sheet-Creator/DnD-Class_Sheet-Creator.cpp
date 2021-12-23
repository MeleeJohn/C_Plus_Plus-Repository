// DnD-Class_Sheet-Creator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Random>
#include "Character.h"

using namespace std;


string playerName;
string playerRace;
string playerClass;
string playerAlignment;

void setUpPlayer();

//make a player character object with getters and setters to set up a party of classes at lvl 1 with stats
int main()
{
    srand(time(0));
    setUpPlayer();
    

}

void setUpPlayer() {
    cout << "What is your characters name? ";
    cin >> playerName;
    cout << endl;
    cout << "Enter your players race: ";
    cin >> playerRace;
    cout << endl;
    cout << "Enter your players class: ";
    cin >> playerClass;
    cout << endl;
    cout << "Enter your players alignment: ";
    cin >> playerAlignment;
    cout << endl;
    Character partyMember = Character(playerRace, playerClass, playerAlignment);
    partyMember.setName(playerName);
    partyMember.printCharacterSheet();
}

