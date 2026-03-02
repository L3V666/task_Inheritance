#include "Mob.h"
#include <iostream>

int Mob::getHealth()
{
    return health;
}

double Mob::getSpeed()
{
    return speed;
}

std::string Mob::getWorld()
{
    return world;
}

bool Mob::getPeaceful()
{
    return peaceful;
}

int Mob::getDamage()
{
    return 0;
}

Mob::~Mob() {}