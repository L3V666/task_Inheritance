#include <iostream>
#include <string>

class Mob
{
protected:
    int health;
    double speed;
    std::string world;
    bool peaceful;

public:
    Mob();

    int getHealth();
    int getSpeed();
    std::string getWorld();
};

class Hostile : public Mob
{
protected:
    int damage;
    int range;
    bool neutral;

public:
    int getDamage();
    int getRange();
    bool getNeutral();
};

class Pig : public Mob
{
public:
    Pig(int health = 10, double speed = 0.25, std::string world = "Overworld", bool peaceful = 1)
    {
        this->health = health;
        this->speed = speed;
        this->world = world;
        this->peaceful = peaceful;
    }
};

class Cow : public Mob
{
public:
    Cow(int health = 10, double speed = 0.25, std::string world = "Overworld", bool peaceful = 1)
    {
        this->health = health;
        this->speed = speed;
        this->world = world;
        this->peaceful = peaceful;
    }
};

class Sheep : public Mob
{
public:
    Sheep(int health = 8, double speed = 0.23, std::string world = "Overworld", bool peaceful = 1)
    {
        this->health = health;
        this->speed = speed;
        this->world = world;
        this->peaceful = peaceful;
    }
};

class Chicken : public Mob
{
public:
    Chicken(int health = 4, double speed = 0.25, std::string world = "Overworld", bool peaceful = 1)
    {
        this->health = health;
        this->speed = speed;
        this->world = world;
        this->peaceful = peaceful;
    }
};

class Wolf : public Hostile
{
public:
    Wolf(int health = 10, double speed = 1, std::string = "Overworld", bool peaceful = 0, int damage = 6, int range = 1, bool neutral = 1)
    {
        this->health = health;
        this->speed = speed; // не точно
        this->world = world;
        this->peaceful = peaceful;
        this->damage = damage;
        this->range = range;
        this->neutral = neutral;
    }
};

class IronGolem : public Hostile
{
public:
    IronGolem(int health = 100, double speed = 2.5, std::string = "Overworld", bool peaceful = 0, int damage = 22, int range = 2, bool neutral = 1)
    {
        this->health = health;
        this->speed = speed; // не точно
        this->world = world;
        this->peaceful = peaceful;
        this->damage = damage;
        this->range = range;
        this->neutral = neutral;
    }
};

class Spider : public Hostile
{
public:
    Spider(int health = 16, double speed = 2, std::string = "Overworld", bool peaceful = 0, int damage = 3, int range = 1, bool neutral = 1)
    {
        this->health = health;
        this->speed = speed; // не точно
        this->world = world;
        this->peaceful = peaceful;
        this->damage = damage;
        this->range = range;
        this->neutral = neutral;
    }
};

class Enderman : public Hostile
{
public:
    Enderman(int health = 40, double speed = 10, std::string = "Overworld, Nether, End", bool peaceful = 0, int damage = 11, int range = 2, bool neutral = 1)
    {
        this->health = health;
        this->speed = speed; // не точно
        this->world = world;
        this->peaceful = peaceful;
        this->damage = damage;
        this->range = range;
        this->neutral = neutral;
    }
};

class Zombie : public Hostile
{
public:
    Zombie(int health = 20, double speed = 0.5, std::string = "Overworld", bool peaceful = 0, int damage = 5, int range = 1, bool neutral = 0)
    {
        this->health = health;
        this->speed = speed; // не точно
        this->world = world;
        this->peaceful = peaceful;
        this->damage = damage;
        this->range = range;
        this->neutral = neutral;
    }
};

class Skeleton : public Hostile
{
public:
    Skeleton(int health = 20, double speed = 0.5, std::string = "Overworld, Nether", bool peaceful = 0, int damage = 5, int range = 14, bool neutral = 0)
    {
        this->health = health;
        this->speed = speed; // не точно
        this->world = world;
        this->peaceful = peaceful;
        this->damage = damage;
        this->range = range;
        this->neutral = neutral;
    }
};

class EnderDragon : public Hostile
{
public:
    EnderDragon(int health = 200, double speed = 50, std::string = "End", bool peaceful = 0, int damage = 10, int range = 10, bool neutral = 0)
    {
        this->health = health;
        this->speed = speed; // не точно
        this->world = world;
        this->peaceful = peaceful;
        this->damage = damage;
        this->range = range;
        this->neutral = neutral;
    }
};

class Wither : public Hostile
{
public:
    Wither(int health = 300, double speed = 50, std::string = "Overworld, Nether, End", bool peaceful = 0, int damage = 15, int range = 10, bool neutral = 0)
    {
        this->health = health;
        this->speed = speed; // не точно
        this->world = world;
        this->peaceful = peaceful;
        this->damage = damage;
        this->range = range;
        this->neutral = neutral;
    }
};