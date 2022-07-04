#include <iostream>

using namespace std;

int *read(const int &size)
{
    int *ptr = new int[size];
    for (int i = 0; i < size; i++)
    {
        ptr[i] = i + 1;
    }

    return ptr;
    // delete []ptr;
}

// int *sum(int arr[], int arr2[], const int &len){

// }

int *sum(int *arr, int *arr2, const int &len)
{
    int *ptr = new int[len];
    for (int i = 0; i < len; i++)
    {
        ptr[i] = arr[i] + arr2[i];
    }
        
    return ptr;
}

void show(const int *arr, const int &n){
    for (int i = 0; i < n; i++){
        cout <<arr[i]<<" ";
    }
}


int main()
{

    // int *arr = new int[4] {1,2,3,3};

    //не общего типа, а того типа, кот у на массив

    //ф-ия должна вернуть указатель на массив

    int size;
    cin >> size;

    int *ptrArr1 = read(size);
    show(ptrArr1, size);
    int *ptrArr2 = read(size);
    show(ptrArr2, size);
    int *ptrArrr3 = sum(ptrArr1, ptrArr2, size);
    show(ptrArrr3, size);

    delete[] ptrArr1;
    delete[] ptrArr2;
    delete[] ptrArrr3;
}