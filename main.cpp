// Terminalslayer
// RPG terminal game
// Made by Daniel Stahl

#include <iostream>
#include <string>
#include "Character.h"
#include "Dice.h"
#include <cstdlib>
#include <ctime>

using namespace std;

void WelcomeNewPlayer();

int main() {
    int diceChoice;
    Dice dice;
    Character character;
    
    //WelcomeNewPlayer();
    
    character.CreateCharacter();
    character.Print();
    
    // Part 1 - Village encounter
    
    // Part 2 - Seek out the enchantress
    
    // Part 3 - Find Skeleton Lord
    
    // Part 4 - Travel to the King
    
    // Part 5 - Battle the Necromancer
}

void WelcomeNewPlayer() {
    cout << "Welcome to Terminal Slayer. Lets begin with building your character" << endl;
}
