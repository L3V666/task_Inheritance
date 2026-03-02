#pragma once

#include "Mob.h"

class Chicken : public Mob
{
public:
    Chicken(int health = 4, double speed = 0.25, std::string world = "Overworld", bool peaceful = 1);
};