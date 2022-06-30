
#include <iostream>

using namespace std;

int main()
{

    int size;
    cin >> size;
    int *A = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> A[i];
    }
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j =  0; j < size - i - 1; j++)
    //     {
    //         if (A[j] > A[j + 1])
    //         {
    //             swap(A[j], A[j + 1]);
    //         }
    //     }
    // }
    cout << *A<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << *(A + i)<< " ";
    }
    delete[] A;
}