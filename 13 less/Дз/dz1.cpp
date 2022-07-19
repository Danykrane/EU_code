#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
    string name;
    int opit;
    double ves;
    double skorost;
    int col;
};
int main()
{
    Animal kot, pes, bars;
    cout << "Введите имя: " << endl;
    cin >> kot.name;
    cout << "Введите сколько опыта: " << endl;
    cin >> kot.opit;
    cout << "Введите вес инвентаря:" << endl;
    cin >> kot.ves;
    cout << "Введите скорость:" << endl;
    cin >> kot.skorost;
    cout << "Введите кол-во жизни:" << endl;
    cin >> kot.col;
    cout << "Персонаж создан!" << endl;
    cout << "Его информация:" << kot.name << ", " << kot.opit << " xp, " << kot.ves << " kg, " << kot.skorost << " sp, " << kot.col << " hp ";
}
