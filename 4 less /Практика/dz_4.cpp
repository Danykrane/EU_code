#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    // for (int i = 100; i > 0;i--){
    //     cout <<i <<" ";
    // }

    // cout <<"Таблица умножения на 11"<<endl;
    // for (int i = 1; i<=10;i++){
    //     cout <<i <<" *"<<11<<" ="<<i * 11<<endl;
    // }

    // cout << "Cube table:" << endl;
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout << i * i * i << " ";
    // }
    
    cout << "Введите число" << endl;
    unsigned int a;
    cin >> a;
    int pr;
    while (a != 0)
    {
        int pr = 1;
        for (int i = 1; i <= a; i++)
        {
            pr = pr * i;
        }

        cout << a << "! = " << pr << endl;
        cout << "Введите число (при вводе 0 программа пректратит работать)" << endl;
        cin >> a;
    }
    cout << "Программа завершила работу";
    

    int a;
    cin >> a;
    int cnt, pos = -1;
    int num_s;
    cin >> num_s;

    int num = a, num1 = a;
    while (a)
    {
        a /= 10;
        cnt++;
    }

    for (int i = 1; i <= cnt; i++)
    {
        int dig = pow(10, cnt - i - 1);
        int rez_n = num / dig % 10;
        if (num_s == rez_n)
            pos = i;
    }
    if (pos == -1)
        cout << "нет";
    else
        cout << "Позиция символа " << num_s << " в числе " << num1 << " " << pos << endl;
}