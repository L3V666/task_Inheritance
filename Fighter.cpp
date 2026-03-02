#include "Fighter.h"

Fighter::Fighter(Mob *mob, Armor *armor, Weapon *weapon)
{
    // Копируем базовые параметры из моба
    this->health = mob->getHealth();
    this->speed = mob->getSpeed();
    this->world = mob->getWorld();
    this->peaceful = mob->getPeaceful();

    this->originalHealth = health;

    if (armor != nullptr)
    {
        this->health = static_cast<int>(this->health * armor->getResist());
    }

    if (weapon != nullptr && isHostile)
    {
        this->damage = weapon->getGain(); // Исправлено: было getDamage()
        this->range += weapon->getDistance();
    }
}

int Fighter::getDamage() { return damage; }
int Fighter::getRange() { return range; }
bool Fighter::getIsHostile() { return isHostile; }
int Fighter::getOriginalHealth() { return originalHealth; }
int Fighter::getHealth() { return health; } // Добавлено