#pragma once

#include "Mob.h"

class Pig : public Mob
{
public:
    Pig(int health = 10, double speed = 0.25, std::string world = "Overworld", bool peaceful = 1);
};