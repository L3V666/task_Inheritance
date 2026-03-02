#pragma once

class Weapon
{
protected:
    int gain;//в виде урона, на который может замениться урон персонажа
    int distance;//в виде добавки в дальности атаки;
public:
    int getGain(); // Исправлено: было double
    int getDistance(); // Исправлено: было double
};