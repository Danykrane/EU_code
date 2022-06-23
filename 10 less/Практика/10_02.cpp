//Ссылки

#include <iostream>
#include <cmath>
using namespace std;

int main()

{
    /*
    & - взятие адреса у переменной
    */

   
    int age = 42;
    cout << &age << endl;
    int num = 34;

    cout << &num << endl;
    double num3 = 45;
    cout << &num3 << endl;

}