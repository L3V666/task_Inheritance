#pragma once

#include "Weapon.h"

class DiamondSword : public Weapon
{
public:
    DiamondSword(int gain = 13, int distance = 0); // Исправлено: было ;
};