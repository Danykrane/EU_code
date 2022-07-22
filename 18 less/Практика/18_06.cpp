
#include <iostream>
#include <string>

using namespace std;

class Animal
{
    int age;
    string name;

public:
    Animal(string name = " ", int age = 0)
    {
        this->name = name;
        this->age = age;
    }

    void show()
    {
        cout << name << " " << age << endl;
    }
};

class HomeAn
{
    int age;
    string name;
    double jump;

public:
    HomeAn(string name = " ", int age = 0, double jump = 0) : name(name), age(age), jump(jump) {}

    void show()
    {
        cout << name << " " << age << " " << jump << endl;
    }
};

class WildAn
{
    int age;
    string name;
    bool roar;

public:
    WildAn(string name = " ", int age = 0, bool roar = 0) : name(name), age(age), roar(roar) {}

    void show()
    {
        cout << name << " " << age << " " << roar << endl;
    }
};
int main()
{
    Animal Cat("Barsik", 12);
    HomeAn Puff("Leopold", 10, 5.5);
    WildAn Wolf("Alex", 15, 1);
    Cat.show();
    Puff.show();
    Wolf.show();
}
