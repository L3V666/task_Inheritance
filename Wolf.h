#pragma once

#include "Hostile.h"

class Wolf : public Hostile
{
public:
    Wolf(int health = 10, double speed = 1, std::string world = "Overworld", bool peaceful = 0, int damage = 6, int range = 1, bool neutral = 1);
};