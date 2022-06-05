#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{

    int a, b;
    double rez;
    cout << "Введите 2 числа" << endl;
    cin >> a >> b;

    int oper;
    cout << "Какую операцию хотите сделать? \n 1 - Сложение \n 2 - Вычистание \n 3 - Умножение \n 4 - Деление \n 5 - Возведение в степень \n 6 - Логарифм по основанию a числа b " << endl;
    cin >> oper;
    switch (oper)
    {
    case 1:
        rez = a + b;
        cout <<fixed<<setprecision(5)<< "Результат действия равен = "<<rez<<endl;
        break;
    case 2:
        rez = a - b;
        cout <<fixed<<setprecision(5)<< "Результат действия равен = "<<rez<<endl;
        break;
    case 3:
        rez = a * b;
        cout <<fixed<<setprecision(5)<< "Результат действия равен = "<<rez<<endl;
        break;
    case 4:
        rez = (double) a / b;
        cout <<fixed<<setprecision(5)<< "Результат действия равен = "<<rez<<endl;
        break;
    case 5:
        rez = pow(a,b);
        cout <<fixed<<setprecision(5)<< "Результат действия равен = "<<rez<<endl;
        break;
    case 6:
        rez = a - b;
        cout <<fixed<<setprecision(5)<< "Результат действия равен = "<<rez<<endl;
        break;
    default:
        cout << "Вы неправильно указали номер";

    }


}