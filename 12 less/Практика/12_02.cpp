// Написать ф-ию, которая реализует
// вставку символа на определенный индекс
// в дин массиве

// int add(int *arr, int &n, const int &per, const int &index);

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

int *add(int *arr, int &n, const int &per, const int &index)
{
    int *b = new int[n + 1];
    for (int i = 0; i < index; i++)
    {
        b[i] = arr[i];
    }
    b[index] = per;
    for (int i = index + 1; i < n + 1; i++)
    {
        b[i] = arr[i - 1];
    }
    n += 1;
    delete[] arr;
    return b;
}

int main()
{

    int size, value, index;
    cin >> size;

    int *ptr = read(size);
    show(ptr, size);

    cin >> value >> index;

    ptr = add(ptr, size, value, index);
    show(ptr, size);

    delete[] ptr;
    // pop_back(arr, size) - удаление с конца эл-та
    // pop_front(arr, size) - удаление сначала

    // push_front(arr, size, value) - доб в начало
    // push_back(arr, size, value)- доб в конец

    //?возвратные

    // resize(arr, size, newSize); //если size > resize, то оставляем эл-ты до индекса resize-1
}   //если size < resize, то вместо пусых будут нули