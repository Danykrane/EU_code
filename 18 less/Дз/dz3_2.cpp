#include <iostream>
#include <string>
#include <vector>

using namespace std;
class man
{
protected:
    string name;
    int xp;
    int sp;
    int hp;
    int dam;

public:
    man(string name = " ", int xp = 0, int sp = 5, int hp = 3, int dam = 20) : name(name), xp(xp), sp(sp), hp(hp), dam(dam) {}
    void set_name(string test)
    {
        name = test;
    }
    void read()
    {
        cout << "Введите имя: " << endl;
        cin >> name;
    }
    virtual void info()
    {
        cout << "Информация об игроке: " << endl;
        cout << name << ", " << xp << " xp, " << sp << " sp, " << hp << " hp, " << dam << " dam. " << endl;
    }
};
class golum : public man
{
    int goblin_power;

public:
    golum(string name = " ", int hp = 0, int xp = 5, int speed = 23, int damage = 10, int goblin_power = 0)
        : man(name, hp, xp, speed, damage), goblin_power(goblin_power) {}

    void info()
    {
        cout << "Информация об игроке: " << endl;
        cout << name << ", " << xp << " xp, " << sp << " sp, " << hp << " hp, " << dam << " dam " << goblin_power << " goblin power." << endl;
    }
};

class fairy : public man
{
    int fairy_power;

public:
    fairy(string name = " ", int hp = 45, int xp = 3, int speed = 220, int damage = 2350, int fairy_power = 0)
        : man(name, hp, xp, speed, damage), fairy_power(fairy_power) {}
    void info()
    {
        cout << "Информация об игроке: " << endl;
        cout << name << ", " << xp << " xp, " << sp << " sp, " << hp << " hp, " << dam << " dam " << fairy_power << " fairy power." << endl;
    }
};

class stoneman : public man
{
protected:
    int stone_power;

public:
    stoneman(string name = " ", int hp = 0, int xp = 0, int speed = 0, int damage = 0, int stone_power = 0)
        : man(name, hp, xp, speed, damage), stone_power(stone_power) {}

    virtual void info()
    {
        cout << "Информация об игроке: " << endl;
        cout << name << ", " << xp << " xp, " << sp << " sp, " << hp << " hp, " << dam << " dam " << stone_power << " stone power." << endl;
    }
};

class stonemanV2 : public stoneman
{
    int stone_fire_power;

public:
    stonemanV2(string name = " ", int hp = 0, int xp = 0, int speed = 0, int damage = 0, int stone_power = 0, int stone_fire_power = 0)
        : stoneman(name, hp, xp, speed, damage, stone_power), stone_fire_power(stone_fire_power) {}
    void info()
    {
        cout << "Информация об игроке: " << endl;
        cout << name << ", " << xp << " xp, " << sp << " sp, " << hp << " hp, " << dam << " dam " << stone_power << " stone power" << stone_fire_power << " stone fire power" << endl;
    }
};

int main()
{
    man *man_ptr;
    vector<man *> vec;
    string what;
    cout << "Какого персонажа добавить?" << endl;
    cin >> what;
    while (what != "exit")
    {
        if (what == "man")
        {
            man_ptr = new man;
            man_ptr->read();
            vec.push_back(man_ptr);
        }

        if (what == "golum")
        {
            man_ptr = new golum;
            man_ptr->read();
            // ((golum)(*man_ptr)->info();
            vec.push_back(man_ptr);
        }
        if (what == "stoneman")
        {
            man_ptr = new stoneman;
            man_ptr->read();
            vec.push_back(man_ptr);
        }

        if (what == "stonemanV2")
        {
            man_ptr = new stonemanV2;
            man_ptr->read();
            vec.push_back(man_ptr);
        }
        cout << "Какого персонажа добавить?" << endl;
        cin >> what;
    }

    for (auto &iter : vec)
    {
        iter->info();
        cout << endl;
    }

    for (auto &iter : vec)
    {
        delete[] iter;
    }

    delete man_ptr;
}