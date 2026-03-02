#include <iostream>
#include <string>

#include "Mob.h"
#include "Hostile.h"
#include "Weapon.h"
#include "Armor.h"
#include "Fighter.h"
#include "Chicken.h"
#include "Cow.h"
#include "DiamondSet.h"
#include "DiamondSword.h"
#include "EnderDragon.h"
#include "Enderman.h"
#include "GoldSet.h"
#include "GoldSword.h"
#include "IronGolem.h"
#include "IronSet.h"
#include "IronSword.h"
#include "LeatherSet.h"
#include "NetheriteSet.h"
#include "Pig.h"
#include "Sheep.h"
#include "Skeleton.h"
#include "Spider.h"
#include "StoneSword.h"
#include "Wither.h"
#include "Wolf.h"
#include "Zombie.h"

using namespace std;

Mob *createMob(const string &name)
{
    if (name == "Pig")
        return new Pig();
    if (name == "Cow")
        return new Cow();
    if (name == "Sheep")
        return new Sheep();
    if (name == "Chicken")
        return new Chicken();
    if (name == "Wolf")
        return new Wolf();
    if (name == "IronGolem")
        return new IronGolem();
    if (name == "Spider")
        return new Spider();
    if (name == "Enderman")
        return new Enderman();
    if (name == "Zombie")
        return new Zombie();
    if (name == "Skeleton")
        return new Skeleton();
    if (name == "EnderDragon")
        return new EnderDragon();
    if (name == "Wither")
        return new Wither();
    return nullptr;
}

Armor *createArmor(const string &name)
{
    if (name == "Leather")
        return new LeatherSet();
    if (name == "Gold")
        return new GoldSet();
    if (name == "Iron")
        return new IronSet();
    if (name == "Diamond")
        return new DiamondSet();
    if (name == "Netherite")
        return new NetheriteSet();
    return nullptr;
}

Weapon *createWeapon(const string &name)
{
    if (name == "StoneSword")
        return new StoneSword();
    if (name == "IronSword")
        return new IronSword();
    if (name == "GoldSword")
        return new GoldSword();
    if (name == "DiamondSword")
        return new DiamondSword();
    return nullptr;
}

int Battle(Fighter *fighter1, Fighter *fighter2, int n1, int n2)
{ // Исправлены параметры
    double ratio1 = (fighter1->getDamage() * n1) / (double)(fighter2->getHealth() * n2);
    double ratio2 = (fighter2->getDamage() * n2) / (double)(fighter1->getHealth() * n1);
    cout << ratio1 << " " << ratio2 << endl;
    if (ratio1 > ratio2)
    {
        return 1;
    }
    if (ratio1 < ratio2)
    {
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

    Armor *armor1 = createArmor(Armor1);
    Weapon *weapon1 = createWeapon(Weapon1);
    Armor *armor2 = createArmor(Armor2);
    Weapon *weapon2 = createWeapon(Weapon2);
    Mob *mob1 = createMob(Mob1);
    Mob *mob2 = createMob(Mob2);

    Fighter *fighter1 = new Fighter(mob1, armor1, weapon1); // Добавлен тип
    Fighter *fighter2 = new Fighter(mob2, armor2, weapon2); // Добавлен тип

    int result;
    result = Battle(fighter1, fighter2, n1, n2);

    if (result == 1)
    {
        cout << "Levaya komanda pobedila!" << endl;
    }
    if (result == 2)
    {
        cout << "Pravaya komanda pobedila!" << endl;
    }
    if (result == 3)
    {
        cout << "Draw!" << endl;
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