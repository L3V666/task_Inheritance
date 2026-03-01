#include <iostream>
#include <string>

using namespace std;

//Часть Льва
class Mob
{
protected:
    int health;
    double speed;
    std::string world;
    bool peaceful;

public:
    int getHealth();
    double getSpeed();
    std::string getWorld();
    bool getPeaceful();
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
    Wolf(int health = 10, double speed = 1, std::string world = "Overworld", bool peaceful = 0, int damage = 6, int range = 1, bool neutral = 1)
    {
        this->health = health;
        this->speed = speed;
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
    IronGolem(int health = 100, double speed = 2.5, std::string world = "Overworld", bool peaceful = 0, int damage = 22, int range = 2, bool neutral = 1)
    {
        this->health = health;
        this->speed = speed;
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
    Spider(int health = 16, double speed = 2, std::string world = "Overworld", bool peaceful = 0, int damage = 3, int range = 1, bool neutral = 1)
    {
        this->health = health;
        this->speed = speed;
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
    Enderman(int health = 40, double speed = 10, std::string world = "Overworld, Nether, End", bool peaceful = 0, int damage = 11, int range = 2, bool neutral = 1)
    {
        this->health = health;
        this->speed = speed;
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
    Zombie(int health = 20, double speed = 0.5, std::string world = "Overworld", bool peaceful = 0, int damage = 5, int range = 1, bool neutral = 0)
    {
        this->health = health;
        this->speed = speed;
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
    Skeleton(int health = 20, double speed = 0.5, std::string world = "Overworld, Nether", bool peaceful = 0, int damage = 5, int range = 14, bool neutral = 0)
    {
        this->health = health;
        this->speed = speed;
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
    EnderDragon(int health = 200, double speed = 50, std::string world = "End", bool peaceful = 0, int damage = 10, int range = 10, bool neutral = 0)
    {
        this->health = health;
        this->speed = speed;
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
    Wither(int health = 300, double speed = 50, std::string world = "Overworld, Nether, End", bool peaceful = 0, int damage = 15, int range = 10, bool neutral = 0)
    {
        this->health = health;
        this->speed = speed;
        this->world = world;
        this->peaceful = peaceful;
        this->damage = damage;
        this->range = range;
        this->neutral = neutral;
    }
};

int Mob::getHealth()
{
    return health;
}

double Mob::getSpeed()
{
    return speed;
}

std::string Mob::getWorld()
{
    return world;
}

bool Mob::getPeaceful()
{
    return peaceful;
}

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

//Конец части Льва

//Часть Ярослава
class Armor
{
protected:
    double resist; //в виде коэффициента, на который домножается урон
public:
    double getResist();
};

double Armor::getResist()
{
    return resist;
}

class Weapon
{
protected:
    int gain;//в виде урона, на который может замениться урон персонажа
    int distance;//в виде добавки в дальности атаки;
public:
    int getGain(); // Исправлено: было double
    int getDistance(); // Исправлено: было double
};

int Weapon::getGain() // Исправлено: было double
{
    return gain;
}

int Weapon::getDistance() // Исправлено: было double
{
    return distance;
}

class LeatherSet : public Armor
{
public:
    LeatherSet(double resist = 0.9) // Исправлено: было int
    {
        this->resist = resist;
    }
};

class GoldSet : public Armor
{
public:
    GoldSet(double resist = 0.75) // Исправлено: было int, добавлена {
    {
        this->resist = resist;
    }
};

class IronSet : public Armor
{
public:
    IronSet(double resist = 0.6) // Исправлено: было int, добавлена {
    {
        this->resist = resist;
    }
};

class DiamondSet : public Armor
{
public:
    DiamondSet(double resist = 0.5) // Исправлено: было int, добавлена {
    {
        this->resist = resist;
    }
};

class NetheriteSet : public Armor
{
public:
    NetheriteSet(double resist = 0.4) // Исправлено: было int, добавлена {
    {
        this->resist = resist;
    }
};

class StoneSword : public Weapon
{
public:
    StoneSword(int gain = 8, int distance = 0) // Исправлено: было ;
    {
        this->gain = gain;
        this->distance = distance; // Исправлено: была ;
    }
};

class IronSword : public Weapon
{
public:
    IronSword(int gain = 11, int distance = 0) // Исправлено: было ;
    {
        this->gain = gain;
        this->distance = distance; // Исправлено: была ;
    }
};

class GoldSword : public Weapon
{
public:
    GoldSword(int gain = 6, int distance = 0) // Исправлено: было ;
    {
        this->gain = gain;
        this->distance = distance; // Исправлено: была ;
    }
};

class DiamondSword : public Weapon
{
public:
    DiamondSword(int gain = 13, int distance = 0) // Исправлено: было ;
    {
        this->gain = gain;
        this->distance = distance; // Исправлено: была ;
    }
};

Mob* createMob(const string& name) {
    if (name == "Pig") return new Pig();
    if (name == "Cow") return new Cow();
    if (name == "Sheep") return new Sheep();
    if (name == "Chicken") return new Chicken();
    if (name == "Wolf") return new Wolf();
    if (name == "IronGolem") return new IronGolem();
    if (name == "Spider") return new Spider();
    if (name == "Enderman") return new Enderman();
    if (name == "Zombie") return new Zombie();
    if (name == "Skeleton") return new Skeleton();
    if (name == "EnderDragon") return new EnderDragon();
    if (name == "Wither") return new Wither();
    return nullptr;
}

Armor* createArmor(const string& name) {
    if (name == "Leather") return new LeatherSet();
    if (name == "Gold") return new GoldSet();
    if (name == "Iron") return new IronSet();
    if (name == "Diamond") return new DiamondSet();
    if (name == "Netherite") return new NetheriteSet();
    return nullptr;
}

Weapon* createWeapon(const string& name) {
    if (name == "StoneSword") return new StoneSword();
    if (name == "IronSword") return new IronSword();
    if (name == "GoldSword") return new GoldSword();
    if (name == "DiamondSword") return new DiamondSword();
    return nullptr;
}

class Fighter : public Mob
{
private:
    int damage; // Урон моба (может быть изменен оружием)
    int range; // Дальность атаки
    bool isHostile; // Является ли моб враждебным
    int originalHealth; // Исходное здоровье для отображения

public:
    // Конструктор принимает моба, броню и оружие
    Fighter(Mob* mob, Armor* armor, Weapon* weapon)
    {
        // Копируем базовые параметры из моба
        this->health = mob->getHealth();
        this->speed = mob->getSpeed();
        this->world = mob->getWorld();
        this->peaceful = mob->getPeaceful();
        
        this->originalHealth = health;
        
        
        if (armor != nullptr) {
            this->health = static_cast<int>(this->health * armor->getResist());
        }
        
        if (weapon != nullptr && isHostile) {
            this->damage = weapon->getGain(); // Исправлено: было getDamage()
            this->range += weapon->getDistance();
        }
    }
    
    int getDamage() { return damage; }
    int getRange() { return range; }
    bool getIsHostile() { return isHostile; }
    int getOriginalHealth() { return originalHealth; }
    int getHealth() { return health; } // Добавлено
};

int Battle(Fighter* fighter1, Fighter* fighter2, int n1, int n2){ // Исправлены параметры
    double ratio1 = (fighter1->getDamage() * n1) / (double)(fighter2->getHealth() * n2);
    double ratio2 = (fighter2->getDamage() * n2) / (double)(fighter1->getHealth() * n1);
    
    if(ratio1 > ratio2){
        return 1;
    }
    if(ratio1 < ratio2){
        return 2;
    }
    return 3;
}

int main()
{
    std::string Mob1, Mob2;
    int n1, n2;
    std::string Armor1, Armor2, Weapon1, Weapon2;
    
    cout << "Modelirovanie bitv modov iz Maynkrafta" << endl;
    cout << "Kakie moby i skolko budut v levoy storone ringa?" << endl;
    cin >> Mob1 >> n1;
    cout << "Kakaya bronya i kakoe oruzhie budet u etikh mobov?" << endl;
    cin >> Armor1 >> Weapon1;
    cout << "Kakie moby i skolko budut v pravoy storone ringa?" << endl;
    cin >> Mob2 >> n2;
    cout << "Kakaya bronya i kakoe oruzhie budet u etikh mobov?" << endl;
    cin >> Armor2 >> Weapon2;

    Armor* armor1 = createArmor(Armor1);
    Weapon* weapon1 = createWeapon(Weapon1);
    Armor* armor2 = createArmor(Armor2);
    Weapon* weapon2 = createWeapon(Weapon2);
    Mob* mob1 = createMob(Mob1);
    Mob* mob2 = createMob(Mob2);
    
    Fighter* fighter1 = new Fighter(mob1, armor1, weapon1); // Добавлен тип
    Fighter* fighter2 = new Fighter(mob2, armor2, weapon2); // Добавлен тип
    
    int result;
    result = Battle(fighter1, fighter2, n1, n2);
    
    if(result == 1){
        cout << "Levaya komanda pobedila!";
    }
    if(result == 2){
        cout << "Pravaya komanda pobedila!";
    }
    if(result == 3){
        cout << "Draw!";
    }
    
    // Очистка памяти
    delete mob1;
    delete mob2;
    delete fighter1;
    delete fighter2;
    delete armor1;
    delete armor2;
    delete weapon1;
    delete weapon2;
    
    return 0;
}