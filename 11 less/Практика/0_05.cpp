#include <iostream>

using namespace std;

void inc(int &);

int main()
{
    int *ptr = new int;              // создание указателя на переменную типа int в дин памяти
    double *pttr = new double(3.14); //создание указателя на переменную типа double, которую инициализировали в моменте объявления
ф
    *ptr = 48;   // переопределение переменной
    *pttr = 9.8; // переопределение переменной

    cout << *ptr << " " << *pttr << endl;

    delete ptr;  // освобождение памяти для ptr
    delete pttr; // освобождение памяти для pttr
}

void inc(int &per)
{
    (per)++;
}
