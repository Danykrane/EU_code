
#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected: // модификатор доступа, который дает доступ к полям age, name в дочернем классе
    int age;
    string name;

public:
    Animal(string name = " ", int age = 0): name(name), age(age){}
    // {
    //     this->name = name;
    //     this->age = age;
    // }

    void show_na()
    {
        cout << name << " " << age;
    }
};

class HomeAn : protected Animal
{
    double jump;

public:
    HomeAn(string name = " ", int age = 0, double jump = 0) : Animal(name, age), jump(jump) {}

    void show_home()
    {
        show_na(); //используем ф-ию базового класса
        cout << " " << jump << endl;
    }
};

class WildAn : public Animal
{
    bool roar;

public:
    WildAn(string name = " ", int age = 0, bool roar = 0) : Animal(name, age), roar(roar) {}

    void show_wild()
    {
        show_na();
        cout << " " << roar << endl;
    }
};
int main()
{
    Animal Cat("Barsik", 12);
    HomeAn Puff("Leopold", 10, 5.5);
    WildAn Wolf("Alex", 15, 1);
    Cat.show_na();
    cout <<endl;
    Puff.show_home();
    // Puff.show_home();
    Wolf.show_wild();
}
