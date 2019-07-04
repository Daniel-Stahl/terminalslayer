// Terminalslayer
// RPG terminal game
//Made by Daniel Stahl

#include <iostream>
#include <string>
#include "player.h"

using namespace std;

int main() {
    int charSelection;
    
    cout << "Welcome to Terminalslayer. Please select your character: " << endl;
    cout << "1. Warrior" << endl;
    cout << "2. Mage" << endl;
    cout << "3. Priest" << endl;
    cout << "4. Rogue" << endl;
    
    cin >> charSelection;
    
    cout << "You have choosen the ";
    
    switch (charSelection) {
        case 1:
            cout << "Warrior" << endl;
            break;
        case 2:
            cout << "Mage" << endl;
            break;
        case 3:
            cout << "Priest" << endl;
            break;
        case 4:
            cout << "Rogue" << endl;
            break;
        default:
            break;
    }
}
