#include "Enderman.h"

Enderman::Enderman(int health, double speed, std::string world, bool peaceful, int damage, int range, bool neutral)
{
    this->health = health;
    this->speed = speed;
    this->world = world;
    this->peaceful = peaceful;
    this->damage = damage;
    this->range = range;
    this->neutral = neutral;
}