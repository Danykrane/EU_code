#include <iostream>

using namespace std;

void inc(int *);

int main()
{

    int num;         //объявление переменной
    cin >> num;      //ввод переменной
    int *ptr = &num; //объявление указателя и инициализация его адреса
    inc(ptr);
    cout << num;
}

void inc(int *ukaz)
{
    (*ukaz)++;
}


