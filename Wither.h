#pragma once

#include "Hostile.h"

class Wither : public Hostile
{
public:
    Wither(int health = 300, double speed = 50, std::string world = "Overworld, Nether, End", bool peaceful = 0, int damage = 15, int range = 10, bool neutral = 0);
};