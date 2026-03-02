#pragma once

#include <string>

class Mob
{
protected:
    int health;
    double speed;
    std::string world;
    bool peaceful;

public:
    virtual ~Mob();
    int getHealth();
    double getSpeed();
    std::string getWorld();
    bool getPeaceful();
    virtual int getDamage();
};