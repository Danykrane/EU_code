#include <iostream>
#include <string>

using namespace std;

class Animal
{

    string name;
    int vozr;

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
    Animal(){} //конструктор по умолчанию, который ничего не делает

    string getN()
    {
        return name;
    }

    int getA()
    {
        return vozr;
    }
};
// - -> 0
// 20 > -> 20

void read(Animal &cat)
{
    string name;
    cin >> name;
    int age;
    cin >> age;

    // validate(cat);
}

// void validate(Animal &cat)

void show(Animal &cat)
{
    cout << "Информация о животном: ";
    cout << cat.getN() << " " << cat.getA();
}

int main()
{
    Animal cot("Том", 12); //создали объект и в момент его создания инициализировали его поля
    Animal mouse; //только объявили о наличии объекта mouse без инициализации
}