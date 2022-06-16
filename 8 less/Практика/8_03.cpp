#include <iostream>
#include <clocale>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int n[100] = {1,2,3, 445, 5, 6, 7};
    int size = 7;
    // cin >> size;
    int index_max = 0;

    for (int i = 0; i < size; i++)
    {
        if (n[index_max] < n[i])
            index_max = i;
    }

    // index_max--;

    for (int i = index_max; i < size; i++)
    {
        n[i] = n[i + 1];
    }
    size--;
    for (int i = 0; i < size; i++)
    {
        cout << n[i] << " ";
    }

    system("pause");
    return 0;
}