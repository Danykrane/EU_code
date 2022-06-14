#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1,5,7,8,12}; //cам определяет размер
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n ;i++){
        cout <<arr[i]<<" ";
    }

    int n;
    cin >> n;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] < arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}
