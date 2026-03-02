#pragma once

#include "Hostile.h"

class Spider : public Hostile
{
public:
    Spider(int health = 16, double speed = 2, std::string world = "Overworld", bool peaceful = 0, int damage = 3, int range = 1, bool neutral = 1);
};