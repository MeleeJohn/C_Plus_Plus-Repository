// DnD-Class_Sheet-Creator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Random>
#include <fstream>
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
string playerSheetFileName;
ofstream playerSheet;

//Equipment PrimaryWeapon;
void setUpPlayer();
void pickAWeapon();
void makeARoll();
//make a player character object with getters and setters to set up a party of classes at lvl 1 with stats
int main()
{
    srand(time(0));
    /*cout << "Please neter the name of the .txt file we are to write this information to: ";
    cin >> playerSheetFileName;
    playerSheet.open(playerSheetFileName.append(".txt"));*/
        if (party.size() == 0) {
            cout << "Lets get you setting up a character!" << endl;
            setUpPlayer();
        }
        else {
            cout << "What would you like to do?" << endl;
            cout << "1. Check equipment" << endl;
            cout << "2. Create new party member (Legacy)" << endl;
            cout << "3. Make roll" << endl;
            cout << "4. End" << endl;

            cin >> userChoiceOne;

            switch (userChoiceOne)
            {
            default:
                break;

            case 1:
                party[0].getEquipment();
                main();
                break;

            case 2:
                //setUpPlayer();
                pickAWeapon();
                main();
                break;

            case 3:
                makeARoll();
                break;

            case 4:
                cout << "Thank you for using me" << endl;
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
    partyMember.setName(playerName);
    party.push_back(partyMember);
    pickAWeapon();
    party[0].printCharacterSheet(playerSheetFileName);

    main();
}

void pickAWeapon() {
    cout << "Choose a weapon: " << endl;
    cout << "1. The Slab (Great Sword)" << endl;
    cout << endl;
    cin >> userChoiceOne;

    switch (userChoiceOne)
    {
    default:
        break;

    case 1:
        GS.InitializeGreatSword();
        party[0].AddEquipment(GS);
        break;
    }
}

void makeARoll() {
    cout << "How many die to roll?" << endl;
    cin >> userChoiceThree;

    cout << "Please enter die type (Ex. d20 -> 20, d100 -> 100, d8 -> 8)." << endl;
    cin >> userChoiceOne;

    cout << "Please add up and enter any modifiers. " << endl;
    cin >> userChoiceTwo;

    party[0].makeRoll(userChoiceOne, userChoiceTwo, userChoiceThree);
    main();
}

