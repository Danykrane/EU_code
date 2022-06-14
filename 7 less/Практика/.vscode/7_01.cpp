#include <iostream>

using namespace std;

int main()
{

    int arr1[100] = {1, 2, 3, 4, 5, 1, 5, 18};
    int arr[3] = {3, 2, 18};
    int arr3[100] = {};
    int cnt = 0;
    int size1 = 8;
    int size2 = 3;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr[j])
            {
                arr1[i] = 0;
                cnt++;
            }
        }
    }
    for (int i = 0; i < size1; i++)
    {
        cout << arr1[i] << " ";
    }

    int col = 0;
    for (int i = 0; i < size1; i++)
    {
        if (arr1[i] != 0)
        {
            arr3[col] = arr1[i];
            col++;
        }
    }


    for (int i = 0; i < size1 - cnt; i ++){
        arr1[i] = arr3[i];
    }
    cout << endl;

    for (int i = 0; i < size1 - cnt; i++)
    {
        cout << arr1[i] << " ";
    }
}