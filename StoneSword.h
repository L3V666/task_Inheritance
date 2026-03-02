#pragma once

#include "Weapon.h"

class StoneSword : public Weapon
{
public:
    StoneSword(int gain = 8, int distance = 0); // Исправлено: было ;
};