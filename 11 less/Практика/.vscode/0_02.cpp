#include <iostream>

using namespace std;

int main()
{

    int num; //объявление переменной
    cin >> num; //ввод переменной
    int *ptr = &num; //объявление указателя и инициализация его адреса
    (*ptr)++; //икреметирование значения по данному адресу
    cout <<num; //вывод переменной
}
