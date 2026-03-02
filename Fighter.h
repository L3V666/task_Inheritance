#pragma once

#include "Mob.h"
#include "Armor.h"
#include "Weapon.h"

class Fighter : public Mob
{
private:
    int damage;         // Урон моба (может быть изменен оружием)
    int range;          // Дальность атаки
    bool isHostile;     // Является ли моб враждебным
    int originalHealth; // Исходное здоровье для отображения

public:
    // Конструктор принимает моба, броню и оружие
    Fighter(Mob *mob, Armor *armor, Weapon *weapon);
    int getDamage();
    int getRange();
    bool getIsHostile();
    int getOriginalHealth();
    int getHealth(); // Добавлено
};