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
    int getHealth();
    double getSpeed();
    std::string getWorld();
    bool getPeaceful();
};