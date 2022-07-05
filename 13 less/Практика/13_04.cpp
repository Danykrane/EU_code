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
};

//напишем ф-ию для вывода полей объекта
void show(Animal test)
{
    cout << "Инфа: " << test.name << " " << test.weight << " " << test.pol << " " << test.vozr << endl;
}

void validate(Animal &test)
{
    if (test.weight < 0)
        test.weight = 0;
}

void read(Animal &test)
{
    cout << "Введите инфу по животному" << endl;
    cin >> test.name >> test.vozr >> test.pol >> test.weight;
}
int main()
{
    Animal bars, lion; // bars и lion - объекты класса Animal
    // cout << "Введите инфу по животному" << endl;
    // cin >> bars.name >> bars.vozr >> bars.pol >> bars.weight;
    // if (bars.weight < 0)
    //     bars.weight = 0;
    read(bars);
    read(lion);
    validate(bars);

    // cout << "Введите инфу по животному" << endl;
    // cin >> lion.name >> lion.vozr >> lion.pol >> lion.weight;
    validate(lion);
    // if (lion.weight < 0)
    //     lion.weight = 0;

    show(bars);
    show(lion);
    // cout << "Инфа: " << bars.name << " " << bars.weight << " " << bars.pol << " " << bars.vozr << endl;
    // cout << "Инфа: " << lion.name << " " << lion.weight << " " << lion.pol << " " << lion.vozr << endl;
}