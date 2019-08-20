#include "Character.h"
#include "Dice.h"
#include <iostream>
#include <cctype>

//Races
#include "Dwarf.h"

//Classes
#include "Barbarian.h"

using namespace std;
Dice dice;
int diceChoice;
bool flag;

void Character::CreateCharacter() {
    
    do {
        cout << "What is your characters name? ";
        cin >> name;
        
        for (int i = 0; i < name.size(); i++) {
            if (isdigit(name[i])) {
                flag = false;
                cout << name[i] << endl;
            } else {
                flag = true;
            }
        }
        
    } while (flag != true);
    
    cout << "Roll dice ";
    cin >> diceChoice;
    cout << endl;
    cout << "You rolled: " << dice.Roll(diceChoice) << endl;
    
}

void Character::Print() const {
    cout << "Your character name is: " << name << endl;
}
