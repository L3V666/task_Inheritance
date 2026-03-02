#pragma once

#include "Hostile.h"

class Skeleton : public Hostile
{
public:
    Skeleton(int health = 20, double speed = 0.5, std::string world = "Overworld, Nether", bool peaceful = 0, int damage = 5, int range = 14, bool neutral = 0);
};