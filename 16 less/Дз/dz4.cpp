#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Corsina
{
    vector<double> magasine; //поле храния вектора значений
    int size;                //поле размерности вектора значений
    double budget;
    double fullbudget;

    void readS(); // прототип метода считывания размера вектора
    void scan();  // прототип метода заполнения вектора

public:
    Corsina(int size);
    Corsina(int size = 0, double fullbudget = 0);
    void read();  // прототп метода считывания
    double sum(); // прототип метода подсчета суммы

    void setB();
    void setBudg();
    void format();
    void abs();
    void show();
};

void show(const double &); //прототип функции вывода значений

int main()
{
    Corsina perv; //создадим объект класса Corsina
    perv.read();
    perv.show();
    perv.abs();
    perv.show();
}

Corsina::Corsina(int size) : size(size) // определение конструктора
{
    if (size < 0)
        size = 0;
}
Corsina::Corsina(int size, double fullbudget) : size(size), fullbudget(fullbudget) // определение конструктора
{
    if (size < 0)
        size = 0;

    if (budget < 0)
        budget = 0;
}
void Corsina::setB()
{
    cout << "Введите макс стоимость товара " << endl;
    cin >> budget;
}

void Corsina::setBudg()
{
    cout << "Введите бюджет " << endl;
    cin >> fullbudget;
}
void Corsina::format()
{
    sort(magasine.begin(), magasine.end());
    int cnt = 0;
    for (auto &iter : magasine)
    {
        if (iter > budget)
            cnt++;
    }
    magasine.resize(magasine.size() - cnt);
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
void Corsina::abs()
{
    for (auto &iter : magasine)
    {
        (iter < 0) ? iter *= -1 : iter;
    }
}
void Corsina::scan()
{
    for (auto &iter : magasine)
    {
        cin >> iter;
    }
}

double Corsina::sum()
{
    double rez = 0;
    for (auto &iter : magasine)
    {
        rez += iter;
    }
    return rez;
}

void Corsina::show()
{
    cout << "Новая корзина: " << endl;
    for (auto &iter : magasine)
    {
        cout << iter << " ";
    }
    cout <<endl;
}

void show(const double &num)
{
    cout << "Итоговая стоимость: " << num << endl;
}