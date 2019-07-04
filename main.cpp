// Terminalslayer
// RPG terminal game
//Made by Daniel Stahl

#include <iostream>
#include <string>
#include "character.h"

using namespace std;

void WarriorQuest(Warrior warrior);
void MageQuest(Mage mage);

int main() {
    int charSelection;
    Warrior warrior;
    Mage mage;
    
    cout << "Welcome to Terminalslayer. Please select your character: " << endl;
    cout << "1. Warrior" << endl;
    cout << "2. Mage" << endl;
    cout << "3. Priest" << endl;
    cout << "4. Rogue" << endl;
    
    cin >> charSelection;
    
    cout << "You have choosen the ";
    
    if (charSelection == 1) {
        cout << "Warrior" << endl;
        cout << "What is your warrior name?" << endl;
        cin >> warrior.name;
        WarriorQuest(warrior);
    } else if (charSelection == 2) {
        cout << "Mage" << endl;
        cout << "What is your mage name?" << endl;
        cin >> mage.name;
        MageQuest(mage);
    }
}

void WarriorQuest(Warrior warrior) {
    cout << "Welcome " << warrior.name << endl;
    cout << "The king requests your presence immidiatelly!";
}

void MageQuest(Mage mage) {
    cout << "Welcome " << mage.name << endl;
    cout << "The counsel of magic has summoned you!";
}
