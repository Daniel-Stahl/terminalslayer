#include <string>

using namespace std;

class Character {
public:
    void CreateCharacter();
    void Print() const;
    
private:
    string name;
    string Class;
    int raceID;
    int strength;
    int dexterity;
    int constitution;
    int intelligence;
    int wisdom;
    int charisma;
    int armorClass;
    int hitPoints;
};
