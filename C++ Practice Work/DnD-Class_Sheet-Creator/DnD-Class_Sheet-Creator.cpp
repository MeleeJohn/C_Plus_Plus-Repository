// DnD-Class_Sheet-Creator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Random>
#include "Character.h"
#include "GreatSword.h"

using namespace std;

//User choice variables can be constantly wiped and re used by different choices
int userChoiceOne;
int userChoiceTwo;
int userChoiceThree;

string playerName;
string playerRace;
string playerClass;
string playerAlignment;
vector <Character> party;
GreatSword GS;
void setUpPlayer();

//make a player character object with getters and setters to set up a party of classes at lvl 1 with stats
int main()
{
    srand(time(0));

    /* Weapon info acan be set from a referenced variant of the 
    great sword class and properly inherits the weapon parent class 
    Figure out how to se everything in the GreatSword.h class*/
    //---------------------------
    GS.setWeaponName("The Slab");
    GS.setDamageType("Slashing/Bludgeoning");
    GS.setWeaponDice(4, 6, 4);
    GS.getWeaponInfo();
    //---------------------------
    
    
    if (party.size() == 0) {
        cout << "Woah player where you going, let's get you set up first and make a character!" << endl;
        setUpPlayer();
    }
    else {
        cout << "What would you like to do?" << endl;
        cout << "1. Check party members" << endl;
        cout << "2. Create new party member" << endl;
        cout << "3. Make roll" << endl;
        cout << "4. End" << endl;

        cin >> userChoiceOne;

        switch (userChoiceOne)
        {
        default:
            break;

        case 1:

            break;

        case 2:
            setUpPlayer();
            break;

        case 3:
            cout << "Please enter die type (Ex. d20 -> 20, d100 -> 100, d8 -> 8)." << endl;
            cin >> userChoiceOne;
            cout << "Please add up and enter any modifiers. " << endl;
            cin >> userChoiceTwo;
            cout << "How many die to roll?" << endl;
            cin >> userChoiceThree;
            party[0].makeRoll(userChoiceOne, userChoiceTwo, userChoiceThree);
            break;

        case 4:

            break;
        }
    }

   
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
    party.push_back(partyMember);
    partyMember.setName(playerName);
    partyMember.printCharacterSheet();

    main();
}

