#include <iostream>
#include <clocale>
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

    void read(); //прототип метода
    void show(); //прототип метода
    void inc();  //прототип метода
};

void valid(Animal &test)
{
    if (test.opit < 0)
    {
        test.opit = 0;
    }
}
void proverka(Animal &test)
{
    if (test.col >= 1 && test.col < 10)
    {
        test.col = 1;
    };
}
int minInvent(Animal &test)
{
    cout << "Инвентарь уменьшен " << endl;
    test.ves -= 50;
    if (test.ves < 0)
    {
        test.ves = 0;
    }
    return test.ves;
}

bool play(int &num)
{
    if (num == 0)
        return 0;
    else
    {
        return 1;
    }
}

int main()
{
    Animal kot, pes, bars;
    kot.read();
    kot.show();
    valid(kot);
    bool flag = 1;
    while (flag)
    {
        int buf = minInvent(kot);
        flag = play(buf);
        kot.show();
    }

}

void Animal::read() //реализация функции read
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

void Animal::show() //реализация функции show
{
    cout << "Персонаж создан!" << endl;
    cout << "Его информация:" << name << ", " << opit << ", "
         << "xp, " << ves << " kg, " << skorost << " sp, " << col << " hp, " << endl;
}

void Animal::inc() //реализация функции inc
{
    col++; //функция является методом класса
}