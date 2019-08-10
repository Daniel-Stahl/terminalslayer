#include <string>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

using namespace std;

class BagOfDice {

public:
    int DiceRoll(int dice) {
        srand((int)time(0));
        int result = 0;

        if (dice == 1) {
            int d6 = (rand() % 6) +1;
            result = d6;
        }
        
        if (dice == 3) {
            int r = (rand() % 20) +1;
            result = r;
        }
        
        return result;
    }
};


