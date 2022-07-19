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

    void read()
    {
        cout << "Введите имя: " << endl;
        cin >> name;
        cout << "Введите сколько опыта: " << endl;
        cin >> opit;
        cout << "Введите вес инвентаря:" << endl;
        cin >> ves;
        cout << "Введите скорость:" << endl;
        cin >> skorost;
        cout << "Введите кол-во жизни:" << endl;
        cin >> col;
    }
    void show()
    {
        cout << "Персонаж создан!" << endl;
        cout << "Его информация:" << name << ", " << opit << ", "
             << "xp, " << ves << " kg, " << skorost << " sp, " << col << " hp ";
    }
};
int main()
{
    Animal kot, pes, bars;
    kot.read();
    kot.show();
}
