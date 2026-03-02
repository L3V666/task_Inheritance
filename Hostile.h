#pragma once

#include "Mob.h"

class Hostile : public Mob
{
protected:
    int damage;
    int range;
    bool neutral;

public:
    int getDamage() override;
    int getRange();
    bool getNeutral();
};