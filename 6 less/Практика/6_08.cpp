#include <iostream>

using namespace std;

int main()
{

    float ves[100] = {3.12, 1.14, 5.456, 9, 1.8};
    int col = 5;
    for (int i = 0; i < col; i++)
    {
        cout << ves[i] << " ";
    }
    cout << endl;

    float sob[100] = {4, 6, 12.4};
    int colS = 0; //переменнная для подсчета кол-ва эл-тов не равных 0

    //считаем кол-во эл-тов не равных 0
    for (int i = 0; i < 100; i++)
    {
        if (sob[i] != 0) colS++;
    }

    col += colS; //уведичение переменной для вывода

    //добавление в конец эл-тов массива sob
    for (int i = col - colS; i < col; i++)
    {
        ves[i] = sob[i - col + colS];
    }

    //вывод
    for (int i = 0; i < col; i++)
    {
        cout << ves[i] << " ";
    }
}