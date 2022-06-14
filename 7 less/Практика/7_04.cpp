#include <iostream>

using namespace std;

int main()
{
    int arr[100] = {1, 2, 3, 4, 5}; // cам определяет размер
    int pos = 3;
    int n = 5;

    for (int i = pos; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
