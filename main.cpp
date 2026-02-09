#include <iostream>
#include <string>

using namespace std;

class Mob
{
protected:
    int health;
    int speed;
    string world;

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

class Peaceful : public Mob {
    
} 