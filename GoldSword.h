#pragma once

#include "Weapon.h"

class GoldSword : public Weapon
{
public:
    GoldSword(int gain = 6, int distance = 0); // Исправлено: было ;
};