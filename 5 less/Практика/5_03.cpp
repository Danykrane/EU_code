#include <iostream>

using namespace std;

int main()
{
    unsigned short int x, y;
    cin >> x >> y;
    //цикл вывода столбцов
    for (int j = 0; j < y; j++)
    {
        cout << " " << j + 1;
    }
    cout << endl;
    for (int i = 0; i < x; i++)
    {
        cout << i + 1 << " ";
        for (int j = 0; j < y; j++)
        {
            cout << "# ";
        }
        cout << endl;
    }
    //вывести нумерацию строк
    //вывести нумерацию столбцов
}

////////
// на вход кол-во строк и столбцов
// 4 5

// #####
// #   #
// #   #
// #####