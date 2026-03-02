#pragma once

#include "Mob.h"

class Sheep : public Mob
{
public:
    Sheep(int health = 8, double speed = 0.23, std::string world = "Overworld", bool peaceful = 1);
};