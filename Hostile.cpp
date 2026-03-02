#include "Hostile.h"

int Hostile::getDamage()
{
    return damage;
}

int Hostile::getRange()
{
    return range; // Исправлено: было return damage
}

bool Hostile::getNeutral()
{
    return neutral;
}