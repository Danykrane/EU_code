#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    string name;
    int vozr;
    double weight;
    bool pol;

    void show()
    {
        cout << "Инфа: " << name << " " << weight << " " << pol << " " << vozr << endl;
    }

    void read()
    {
        cin >> name >> weight >> pol >> vozr;
    }
};
void validate(Animal &test)
{
    if (test.weight < 0)
        test.weight = 0;
}
//напишем ф-ию для вывода полей объекта

int main()
{
    Animal bars, lion; // bars и lion - объекты класса Animal
    bars.read();       //метод класса
    lion.read();       //метод класс
    validate(bars);    //передача экземпляра в функцию
    validate(lion);    //передача экземпляра в функцию

    bars.show(); //метод класса
    lion.show(); //метод класса
}