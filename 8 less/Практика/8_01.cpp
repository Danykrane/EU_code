
#include <iostream>
#include <ctime>
using namespace std;

int main()
{

    // cin >>n;

    // int num = -45 + rand() % 100; //двузначные (полож и отриц числа)
    srand(time(0)); //для обновления результатов
    //int num = -34 + (rand() % static_cast<int>(100 - -34 + 1));
    // cout << num << endl;

    // int n;
    // cin >> n;
    // int arr[100] = {};
    // for (int i = 0; i < n; i++)
    // {

    //     arr[i] = -34 + (rand() % static_cast<int>(100 - -34 + 1));
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // /*

    int arr[100] = {};
    //srand( time( 0 ) ); // автоматическая рандомизация
     srand( time( 0 ) );
    for(int i = 0; i < n; i++){

        arr[i] = -34 + rand() % 100;
    }
    //cout << "rand_value = " << 1 + rand() % 10 << endl;
    for(int i = 0; i < n; i++){
       cout <<arr[i]<<" ";
    }
    return 0;
}