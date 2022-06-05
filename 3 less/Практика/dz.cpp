#include <iostream>

using namespace std;

int main()
{

    int a;

    cout << "Введите число" << endl;
    cin >> a;

    switch (a)
    {
    case 1 ... 15:
        cout << "Проверка";
        break;

    default:
        cout << "Вы неправильно указали номер";
    }
}