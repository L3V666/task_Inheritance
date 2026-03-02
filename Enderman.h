#pragma once

#include "Hostile.h"

class Enderman : public Hostile
{
public:
    Enderman(int health = 40, double speed = 10, std::string world = "Overworld, Nether, End", bool peaceful = 0, int damage = 11, int range = 2, bool neutral = 1);
};