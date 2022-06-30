#include <iostream>

using namespace std;

// void show(const int arr[], const int &n)
// {
//     cout << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << *(arr + i) << " ";
//     }
// }

void show(const int *arr, const int &n)
{
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << *(arr + i) << " ";
    }
}

int main()
{
    int size;
    cin >> size;
    cout << size;

    int *arr2 = new int[size]; // создание указателя на массив типа int размера size
    int *ptr = arr2;
    for (int i = 0; i < size; i++)
    {
        arr2[i] = i + 1;
    }

    show(arr2, size);
    delete[] arr2; // освобождение памяти для динамического массива
}
