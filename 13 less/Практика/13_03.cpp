#include <iostream>
#include <string>
using namespace std;

//создать класс животное
//у кот буд след поля: имя, возр, вес, пол
/*
class[название]
{
    public: // модификатор доступа
    //тело класса
};
*/

class Animal
{
public:
    string name;
    int vozr;
    double weight;
    bool pol;
};

int main()
{
    Animal bars, lion; // bars и lion - объекты класса Animal
    cout << "Введите инфу по животному" << endl;
    cin >> bars.name >> bars.vozr >> bars.pol >> bars.weight;
    if (bars.weight < 0)
        bars.weight = 0;

    cout << "Введите инфу по животному" << endl;
    cin >> lion.name >> lion.vozr >> lion.pol >> lion.weight;
    if (lion.weight < 0)
        lion.weight = 0;

    cout << "Инфа: " << bars.name << " " << bars.weight << " " << bars.pol << " " << bars.vozr << endl;
    cout << "Инфа: " << lion.name << " " << lion.weight << " " << lion.pol << " " << lion.vozr << endl;
}