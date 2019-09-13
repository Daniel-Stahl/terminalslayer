// Terminalslayer
// RPG terminal game
// Made by Daniel Stahl

#include <iostream>
#include <string>
#include "Slayer.h"

using namespace std;

void FindOpponent(Slayer& opponent);
void BattleMode(Slayer slayer, Slayer opponent);

int main() {
    // Create Class
    Slayer slayer;
    Slayer opponent;
    int playersChoice;
    int menu;
    
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

 //Select Fight, Rest, or Exit
    do {
        
        cout << "Choose wisely:" << endl
             << "1: Fight" << endl
             << "2: Rest" << endl
             << "3: Leave the arena" << endl;
        
        cin >> menu;
        
        if (menu == 1) {
            cout << "Looking for an opponent" << endl;
            
            FindOpponent(opponent);
            
            cout << "Get ready, your opponent is entering the ring." << endl;
            
            BattleMode(slayer, opponent);
        } else if(menu == 2) {
            cout << "Rest" << endl;
        }
        
        
    
    } while (menu != 3);

}

void FindOpponent(Slayer& opponent) {
    opponent.CreateSlayer(100, 30);
}

void BattleMode(Slayer slayer, Slayer opponent) {
    do {
        int attackChoice;
        int hit = slayer.AttackOne();
        
        cout << "Which attack do you want to use?" << endl;
        cout << "1: Attack 1" << endl
             << "2: Attack 2" << endl;
        
        cin >> attackChoice;
        
        if (attackChoice == 1) {
            cout << "You use Attack 1" << endl;
            cout << hit << " to opponent" << endl;
            
            opponent.HP = opponent.HP - hit;
            
            cout << "Opponent HP is: " << opponent.HP << endl;
        }
    } while (opponent.HP > 0);
}
