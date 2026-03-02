#pragma once

#include "Hostile.h"

class Zombie : public Hostile
{
public:
    Zombie(int health = 20, double speed = 0.5, std::string world = "Overworld", bool peaceful = 0, int damage = 5, int range = 1, bool neutral = 0);
};