#pragma once

#include "Armor.h"

class LeatherSet : public Armor
{
public:
    LeatherSet(double resist = 0.9); // Исправлено: было int
};