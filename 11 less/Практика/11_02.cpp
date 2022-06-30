#include <iostream>

using namespace std;

// 1 2 3 4 4 5 5 5 6 (9)
//ввод переменной на удаление 5
// 1 2 3 4 4 6 (6)

int *read(const int &n)
{
    int *a = new int[n];

    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }
    return a;
    delete[] a;
}

int *func(int *arr, int &n)
{
    int per;
    cin >> per;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == per)
            cnt++;
    }

    int *a = new int[n - cnt];
    int indnov = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != per)
        {
            a[indnov] = arr[i];
            indnov++;
        }
    }
    n -= cnt;
    delete[] arr;
    return a;
}

//написать функцию которая заполняет массив (возвратная)

int main()
{
    int size;
    cin >> size;
    int *ptrarr = read(size);
    int *newArr = func(ptrarr, size);

    for (int i = 0; i < size; i++)
    {
        cout << newArr[i] << " ";
    }

   
    delete[] newArr;
}