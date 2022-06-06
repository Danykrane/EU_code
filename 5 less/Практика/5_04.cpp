#include <iostream>

using namespace std;

int main()
{
    // unsigned short int x, y;
    // cin >> x >> y;
    unsigned short int x;
    // cin >> x;

    // for (int i = 0; i < x; i++)
    // {
    //     for (int j = 0; j < y; j++)
    //     {
    //         if(i == 0 || i == x -1 || j == 0 || j == y - 1) //первой и посл строки
    //         cout << "# ";
    //         else cout <<" ";
    //     }
    //     cout << endl;
    // }
    //вывести нумерацию строк
    //вывести нумерацию столбцов
      cin >> x;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if( j == 0 || j == x - 1 || i + j == x -1) //первой и посл строки
            cout << "#";
            else cout <<" ";
        }
        cout << endl;
    }

    // for (int i = 0; i < x; i++)
    // {
    //     for (int j = 0; j < x; j++)
    //     {
    //         if(i == 0 || i == x -1 || j == 0 || j == x - 1 || i == x/2 || j == x /2) //первой и посл строки
    //         cout << "#";
    //         else cout <<" ";
    //     }
    //     cout << endl;
    // }
}

////////
// на вход кол-во строк и столбцов
// 4 5

// #####
// #   #
// #   #
// #####

// на вход кол-во строк и столбцов

// 9
// #########
// #   #   #
// #   #   #
// #   #   #
// #########
// #   #   #
// #   #   #
// #   #   #
// #########
