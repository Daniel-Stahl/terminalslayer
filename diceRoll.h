#include <string>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

using namespace std;

void DiceRoll(int dice) {
//    srand((int)time(0));
//    int result = 0;
//
//    if (dice == 3) {
//        int r = (rand() % 20) +1;
//        result = r;
//    }
    
    srand((int)time(0));
    int j = 0;
    while(j++ < 10) {
        int r = (rand() % 20) + 1;
        cout << r << " ";
        sleep(1);
    }
    
//    return result;
}


