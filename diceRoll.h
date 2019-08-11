#include <string>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <iostream>

using namespace std;

struct BagOfDice {

    int DiceRoll(int dice) {
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
        
//        if (dice == 1) {
//            int d6 = (rand() % 6) +1;
//            result = d6;
//        }
//
//        if (dice == 3) {
//            int r = (rand() % 20) +1;
//            result = r;
//        }
        
        return result;
    }
};


