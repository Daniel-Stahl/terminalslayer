// Terminalslayer
// RPG terminal game
// Made by Daniel Stahl

#include <iostream>
#include <string>
#include "Slayer.h"

using namespace std;

int main() {
    // Create Class
    Slayer slayer;
    int playersChoice;
    
    cout << "Welcome to Terminal Slayer!" << endl
         << "Choose a Class:" << endl
         << "1: Barbarian" << endl
         << "2: Rogue" << endl
         << "3: Mage" << endl;
    
    cin >> playersChoice;
    
    if (playersChoice == 1) {
        slayer.CreateSlayer(200, 40);
    } else if (playersChoice == 2) {
        slayer.CreateSlayer(160, 45);
    } else if (playersChoice == 3) {
        slayer.CreateSlayer(150, 50);
    }
//
//    do {
//        int choiceA;
//        int
//    } while (<#condition#>);
    
    cout << "Player selected: " << slayer.HP << endl;
    cout << "Player swings: " << slayer.AttackOne() << endl;
    cout << "Player swings: " << slayer.AttackTwo() << endl;
    
    
}
