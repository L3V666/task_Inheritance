#include <iostream>
#include <string>

using namespace std;

class Mob
{
protected:
    int health;
    int speed;
    string world;
    bool peaceful;

public:
    Mob();

    int getHealth();
    int getSpeed();
    string getWorld();
};

class Hostile : public Mob
{
protected:
    int damage;
    int range;
    bool neutral;

public:
    int getDamage();
    int getRange();
    bool getNeutral();
};
