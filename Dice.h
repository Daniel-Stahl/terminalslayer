#include <string>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <iostream>

using namespace std;

struct Dice {

    int Roll(int dice) {
        srand((int)time(0));
        int result = 0;
        
        if (dice >= 1 && dice <= 6) {
            if (dice == 1) {
                dice = 4;
            } else if (dice == 2) {
                dice = 6;
            } else if (dice == 3) {
                dice = 8;
            } else if (dice == 4) {
                dice = 10;
            } else if (dice == 5) {
                dice = 12;
            } else if (dice == 6) {
                dice = 20;
            }
            
            result = (rand() % dice) +1;
        }
        
        return result;
    }
};


