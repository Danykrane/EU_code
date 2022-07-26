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
    void info()
    {
        cout << "Информация об игроке: " << endl;
        cout << name << ", " << xp << " xp, " << sp << " sp, " << hp << " hp, " << dam << " dam. " << endl;
    }
};
class golum : public man
{
protected:
    int goblin_power;

public:
    golum(string name = " ", int hp = 0, int xp = 5, int speed = 23, int damage = 10, int goblin_power = 0)
        : man(name, hp, xp, speed, damage), goblin_power(goblin_power) {}

    void info()
    {
        cout << "Информация об гоблине: " << endl;
        cout << name << ", " << xp << " xp, " << sp << " sp, " << hp << " hp, " << dam << " dam " << goblin_power << " goblin power." << endl;
    }
};

class fairy : public man
{
protected:
    int fairy_power;

public:
    fairy(string name = " ", int hp = 45, int xp = 3, int speed = 220, int damage = 2350, int fairy_power = 0)
        : man(name, hp, xp, speed, damage), fairy_power(fairy_power) {}
    void info()
    {
        cout << "Информация об феечке: " << endl;
        cout << name << ", " << xp << " xp, " << sp << " sp, " << hp << " hp, " << dam << " dam " << fairy_power << " fairy power." << endl;
    }
};

class stoneman : public man
{

protected:
    int stone_power;

public:
    stoneman(string name = " ", int hp = 0, int xp = 10, int speed = 0, int damage = 0, int stone_power = 0)
        : man(name, hp, xp, speed, damage), stone_power(stone_power) {}

    void info()
    {
        cout << "Информация об тони: " << endl;
        cout << name << ", " << xp << " xp, " << sp << " sp, " << hp << " hp, " << dam << " dam " << stone_power << " stone power." << endl;
    }
};

class stonemanV2 : public stoneman
{
protected:
    int stone_fire_power;

public:
    stonemanV2(string name = " ", int hp = 2, int xp = 0, int speed = 4, int damage = 0, int stone_power = 0, int stone_fire_power = 0)
        : stoneman(name, hp, xp, speed, damage, stone_power), stone_fire_power(stone_fire_power) {}
    void info()
    {
        cout << "Информация об стрке пок: " << endl;
        cout << name << ", " << xp << " xp, " << sp << " sp, " << hp << " hp, " << dam << " dam " << stone_power << " stone power" << stone_fire_power << " stone fire power" << endl;
    }
};

int main()
{
    vector<man> vec;
    string what;
    cout << "Какого персонажа добавить?" << endl;
    cin >> what;
    while (what != "exit")
    {
        if (what == "man")
        {
            man player;
            player.read();
            vec.push_back(player);
        }

        if (what == "golum")
        {
            golum player;
            player.read();
            vec.push_back(player);
        }
        if (what == "stoneman")
        {
            stoneman player;
            player.read();
            vec.push_back(player);
        }

        if (what == "stonemanV2")
        {
            stonemanV2 player;
            player.read();
            vec.push_back(player);
        }
        cout << "Какого персонажа добавить?" << endl;
        cin >> what;
    }

    for (auto &iter : vec)
    {
        iter.info();
        cout << endl;
    }
}