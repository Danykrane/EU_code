#include <iostream>

using namespace std;

void read(int &num1, int &num2)
{
    cin >> num1 >> num2;
}
void swapp(int &num, int &num1)
{
    int buf = num;
    num = num1;
    num1 = buf;
}

int main()
{

    // int a = 42;
    // int b = 5;
    //написать функцию ввода значений
    int a, b;
    read(a, b);
    cout << a << " " << b << endl; // 42 5
    swapp(a, b);                   //меняет знаяения у аргументов
    cout << a << " " << b;         // 5 42
}
