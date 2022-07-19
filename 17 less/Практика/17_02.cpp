#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Corsina
{
    vector<double> magasine;
    int size;

    void readS();
    void scan();

public:
    Corsina(int size = 0);
    void read(); // прототп метода считывания
    void show();
    void razm();

    void join(const Corsina &test)
    {
        for (auto &iter : test.magasine)
        {
            magasine.push_back(iter);
        }
    }
};
// Corsina &join(const Corsina &test)
// {
//     for (auto &iter : test.magasine)
//     {
//         this->magasine.push_back(iter);
//     }
//     return *this;
// }
// };

void show(const double &); //прототип функции вывода значений

int main()
{
    Corsina perv, vtor;
    perv.read();
    vtor.read();
    perv.join(vtor);
    perv.show();
    perv.razm();
}

Corsina::Corsina(int size) : size(size) // определение конструктора
{
    if (size < 0)
        size = 0;
}

void Corsina::readS()
{
    cout << "Укажите количество товаров в корзине: " << endl;
    cin >> size;
}
void Corsina::read()
{
    if (size == 0)
        readS();

    magasine.resize(size);
    scan();
}

void Corsina::scan()
{
    for (auto &iter : magasine)
    {
        cin >> iter;
    }
}

void Corsina::show()
{
    cout << "Новая корзина: " << endl;
    for (auto &iter : magasine)
    {
        cout << iter << " ";
    }
    cout << endl;
}

void Corsina::razm()
{
    cout << "Размер корзины: " << magasine.size() << endl;
}

void show(const double &num)
{
    cout << "Итоговая стоимость: " << num << endl;
}
