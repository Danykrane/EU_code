#include <iostream>
#include <string>

using namespace std;

class Animal
{

    string name;
    int vozr;
    int razm;

    void valid()
    {
        if (vozr < 0)
            vozr = 0;
    }

public:
    Animal(string name = "спросить кличку", int vozr = 0, int razm = 0) : name(name), vozr(vozr), razm(razm) //список иниуиализации класса Animal
    {
        valid();
    }

    Animal(int vozr, int razm) : vozr(vozr), razm(razm)
    {
        name = "спросить кличку";
    }
    string getN()
    {
        return name;
    }

    int getA()
    {
        return vozr;
    }
    int getr()
    {
        return razm;
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
    cout << cat.getN() << " " << cat.getA() << " " << cat.getr() << endl;
}

int main()
{
    Animal cot("Том", 12, 23);
    Animal mouse, dog("Лайка"), mouses(23);

    show(cot);
    show(dog);

    show(mouse);
}