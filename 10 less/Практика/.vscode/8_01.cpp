#include <iostream>

using namespace std;

void run(int); //объявление прототипа

int main()
{
    int value;
    cout << "Введите изначальное кол-во денег: ";
    cin >> value;
    run(value);
}

void run(int num)
{
    if (num < 0)
    {
        cout << "Введите положительное число для подсчета: " << endl;
        int n;
        cin >> n;
        run(n); //вызов самой ф-ии
    }
    else
    {
        cout << "В лилипутии будет: " << num * 1.33 << " дублонов" << endl;
    }
}