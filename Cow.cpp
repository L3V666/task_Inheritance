#include "Cow.h"

Cow::Cow(int health, double speed, std::string world, bool peaceful)
{
    this->health = health;
    this->speed = speed;
    this->world = world;
    this->peaceful = peaceful;
}