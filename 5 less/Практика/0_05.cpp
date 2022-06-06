#include <iostream>

using namespace std;

int main()
{
    //сумма до введенной числа (включительно)
    int sum = 0; //обнуляем переменную суммы
    int num;
    cin >> num;
    //5 = 0 + 1 + 2 + 3 + 4 + 5
    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }
    cout << sum << endl;









    // int max1 = INT8_MIN;        // 8 битное
    // int max2 = INT16_MIN;       // 16 битнное
    // int max3 = INT32_MIN;       // 32 битное
    // long long max4 = INT64_MIN; // 64 битное

    // int min1 = INT8_MAX;        // 8 битное
    // int min2 = INT16_MAX;       // 16 битнное
    // int min3 = INT32_MAX;       // 32 битное
    // long long min4 = INT64_MAX; // 64 битное

    // cout << max1 << endl;
    // cout << max2 << endl;
    // cout << max3 << endl;
    // cout << max4 << endl;
    
    // cout << min1 << endl;
    // cout << min2 << endl;
    // cout << min3 << endl;
    // cout << min4 << endl;


    //Задача: найти максимальное положительное число
    // int max = 0;
    // unsigned int a, b, c, d;
    // cin >> a >> b;
    // if (a > max) max = a;
    // if (b > max) max = b;
    // if (c > max) max = c;
    // if (d > max) max = d;

    //i - для строк
    //j - для эл-тов строки
    int cnt = 0;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            cout <<cnt<<" "; //вывод элементов строки
            cnt++;
        }
        cout <<endl;//переход на новую строку
    }


}
