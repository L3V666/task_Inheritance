#pragma once

#include "Hostile.h"

class EnderDragon : public Hostile
{
public:
    EnderDragon(int health = 200, double speed = 50, std::string world = "End", bool peaceful = 0, int damage = 10, int range = 10, bool neutral = 0);
};