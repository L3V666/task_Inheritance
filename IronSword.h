#pragma once

#include "Weapon.h"

class IronSword : public Weapon
{
public:
    IronSword(int gain = 11, int distance = 0); // Исправлено: было ;
};