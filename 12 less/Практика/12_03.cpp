// pop_back(arr, size) - удаление с конца эл-та
// pop_front(arr, size) - удаление сначала

// push_front(arr, size, value) - доб в начало
// push_back(arr, size, value)- доб в конец

//?возвратные

// resize(arr, size, newSize); //если size > resize, то оставляем эл-ты до индекса resize-1
//если size < resize, то вместо пусых будут нули
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

void show(const int *arr, const int &n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int *pop_front(int *arr, int &n)
{
    int *ptr = new int[n - 1];

    for (int i = 1; i < n; i++)
    {
        ptr[i - 1] = arr[i];
    }
    n--;
    delete[] arr;
    return ptr;
}

int *pop_back(int *A, int &size)
{
    int *B = new int[size - 1];
    for (int i = 0; i < size - 1; i++)
    {
        B[i] = A[i];
    }
    size--;
    delete[] A;
    return B;
}

int *push_front(int *A, int &size, const int &value)
{
    int *B = new int[size + 1];
    B[0] = value;
    for (int i = 1; i < size + 1; i++)
    {
        B[i] = A[i - 1];
    }
    size++;
    delete[] A;
    return B;
}

int *push_back(int *A, int &size, const int &value)
{
    int *B = new int[size + 1];
    B[size] = value;
    for (int i = 0; i < size; i++)
    {
        B[i] = A[i];
    }
    size++;
    delete[] A;
    return B;
}

int *resize(int *arr, int &size, const int &newSize)
{
    //
}
int main()
{

    int size, newS;
    cin >> size;

    int *ptr = read(size);
    show(ptr, size);
    cout << endl;
    cin >> newS;

    ptr = resize(ptr, size, newS);
    show(ptr, size);

    delete[] ptr;
}