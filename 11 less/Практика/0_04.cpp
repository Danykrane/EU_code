#include <iostream>

using namespace std;

void inc(int &);

int main()
{

    int num;    //объявление переменной
    cin >> num; //ввод переменной
    inc(num);
    cout << num;
}

void inc(int &per)
{
    (per)++;
}
