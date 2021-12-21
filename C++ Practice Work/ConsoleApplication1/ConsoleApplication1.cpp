// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>

using namespace std;
int dieType = 0;
int dieAmount;
int rollModifiers;
int rollResult;
int tempRollHolder;

int main()
{
    srand(time(0));
    //This is a Dice roller

    cout << "How many dice? ";
    cin >> dieAmount;
    cout << endl;

    cout << "Which type of die to roll: D";
    cin >> dieType;
    cout << endl;

    cout << "Any modifiers? ";
    cin >> rollModifiers;
    cout << endl;

    for (int i = 0; i < dieAmount; i++) {
        tempRollHolder = rand() % dieType + 1;
        rollResult += tempRollHolder;
        cout << tempRollHolder << endl;
    }

    //rollResult = rand() % 100 + 1;
 
    rollResult += rollModifiers;

    if (rollModifiers != 0) {
        cout << dieAmount << "D" << dieType << " + " << rollModifiers << " = " << rollResult << endl;
    }
    else {
        cout << dieAmount << "D" << dieType << " = " << rollResult << endl;
    }


   

}

