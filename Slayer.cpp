#include "Slayer.h"
#include <ctime>
#include <cstdlib>

using namespace std;

void Slayer::CreateSlayer(int HP, int attackPower) {
    this->HP = HP;
    this->attackPower = attackPower;
}

int Slayer::AttackOne() {
    return rand() % this->attackPower;
};

int Slayer::AttackTwo() {
    return rand() % this->attackPower + rand() % this->attackPower;
};
