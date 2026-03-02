#pragma once

#include "Hostile.h"

class IronGolem : public Hostile
{
public:
    IronGolem(int health = 100, double speed = 2.5, std::string world = "Overworld", bool peaceful = 0, int damage = 22, int range = 2, bool neutral = 1);
};