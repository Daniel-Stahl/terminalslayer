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
    
    cout << "We found an opponent." << endl;

 //Select Fight, Rest, or Exit
    do {
        int menu;
        
        cout << "Choose wisely:" << endl;
        cout << "1: Fight" << endl
             << "2: Rest" << endl
             << "3: Leave the arena" << endl;
        
        cin >> menu;
        
        if (menu == 1) {
            cout << "Fight" << endl;
        } else if(menu == 2) {
            cout << "Rest" << endl;
        }
        
        
    
    } while (menu != 3);
    
    cout << "Player selected: " << slayer.HP << endl;
    cout << "Foe swings: " << slayer.AttackOne() << "Player HP is: " << slayer.HP - slayer.AttackOne() << endl;
    slayer.HP = slayer.HP - slayer.AttackOne();
    cout << "Player HP is: " << slayer.HP << endl;
    
}
