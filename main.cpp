// Terminalslayer
// RPG terminal game
//Made by Daniel Stahl

#include <iostream>
#include <string>
#include "character.h"
#include "diceRoll.h"
#include <cstdlib>
#include <ctime>

using namespace std;

void WarriorQuest(Warrior warrior);
void MageQuest(Mage mage);

int main() {
    int charSelection;
    Warrior warrior;
    Mage mage;
    Priest priest;
    Rogue rogue;
    int diceChoice;
    
    
    cout << "Welcome to Terminalslayer. Please select your character: " << endl;
    cout << "1. Warrior" << endl;
    cout << "2. Mage" << endl;
    cout << "3. Priest" << endl;
    cout << "4. Rogue" << endl;

    cin >> charSelection;

    cout << "You have choosen the ";

    if (charSelection == 1) {
        cout << "Warrior" << endl;
        cout << "What is your name warrior?" << endl;
        cin >> warrior.name;
        WarriorQuest(warrior);
    } else if (charSelection == 2) {
        cout << "Mage" << endl;
        cout << "What is your name mage?" << endl;
        cin >> mage.name;
        MageQuest(mage);
    } else if (charSelection == 3) {
        cout << "Priest" << endl;
        cout << "What is your name priest?" << endl;
        cin >> priest.name;
    } else if (charSelection == 4) {
        cout << "Rogue" << endl;
        cout << "What is your name rogue?" << endl;
        cin >> rogue.name;
    }
    
    // Part 1 - Looking for magical weapon
    
    // Part 2 - Seek out the enchantress
    
    // Part 3 - Slay the troll
    
    // Part 4 - Return to the King
    
    // Part 5 - Defend castle from Dragon
}

void WarriorQuest(Warrior warrior) {
    cout << "Welcome " << warrior.name << endl;
    cout << "The king requests your presence immidiatelly!";
}

void MageQuest(Mage mage) {
    cout << "Welcome " << mage.name << endl;
    cout << "The counsel of magic has summoned you!";
}

void PriestQuest(Priest priest) {
    cout << "Welcome " << priest.name << endl;
    cout << "The Holy Order of Priests call upon you!";
}

void RogueQuest(Rogue rogue) {
    cout << "Welcome " << rogue.name << endl;
    cout << "The counsel of magic has summoned you!";
}
