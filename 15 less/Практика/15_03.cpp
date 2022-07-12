#include <iostream>
#include <string>

using namespace std;

class Animal
{

    string name;
    int vozr;
    // float rost;

    void valid()
    {
        if (vozr < 0)
            vozr = 0;
    }

public:
    Animal(string test, int age) //конструктор класса Animal
    {
        name = test;
        vozr = age;
        valid();
    }
    Animal(string test)
    {
        name = test;
        vozr = 0;
    }
    Animal(int vozr_)
    {
        vozr = vozr_;
        name = "спросить кличку";
    }
    Animal()
    {
        name = "спросить кличку";
        vozr = 0;
    }

    string getN()
    {
        return name;
    }

    int getA()
    {
        return vozr;
    }
};


void read(Animal &cat)
{
    string name;
    cin >> name;
    int age;
    cin >> age;

}

// void validate(Animal &cat)

void show(Animal &cat)
{
    cout << "Информация о животном: ";
    cout << cat.getN() << " " << cat.getA() << endl;
}

int main()
{
    Animal cot;
    // Animal mouse, dog("Лайка"), zebra(23);

    show(cot);
    // show(dog);
    // show(zebra);
    // show(mouse);
}