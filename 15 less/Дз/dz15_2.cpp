#include <iostream>
#include <cmath>
using namespace std;

class dnMass
{
    int size;
    int *mass;

public:
    dnMass();
    void insert();
    void show();
    int getIndexVal(int index);
    void change(int, int);
    void push_back(const int &value);
    void push_front(const int &value);
    void pop_front();
    void pop_back();
    void insert(const int &pos, int *arr, const int &len);
    void del();
};

int main()
{

    int size;
    cin >> size;
    dnMass mass(size);
    mass.insert();
    /*mass.push_back(45);*/
    /*mass.push_front(45);*/
    /*mass.pop_front();*/
    /*mass.pop_back();*/
    /*int len = 3;
    int* B = new int[len] {4,4,4};
    mass.insert(4, B, len);*/
    mass.show();
    mass.del();
    return 0;
}

void dnMass::insert()
{
    for (int i = 0; i < size; i++)
    {
        cin >> mass[i];
    }
}
void dnMass::show()
{
    for (int i = 0; i < size; i++)
    {
        cout << mass[i] << " ";
    }

    cout << endl
         << endl;
}
int dnMass::getIndexVal(int index)
{
    return mass[index];
}
void dnMass::change(int index, int value)
{
    mass[index] = value;
}
void dnMass::push_back(const int &value)
{
    int *B = new int[size + 1];
    for (int i = 0; i < size; i++)
    {
        B[i] = mass[i];
    }
    B[size] = value;
    size++;
    delete[] mass;
    mass = B;
}
void dnMass::push_front(const int &value)
{
    size++;
    int *B = new int[size];
    B[0] = value;
    for (int i = 1; i < size; i++)
    {
        B[i] = mass[i - 1];
    }
    delete[] mass;
    mass = B;
}
void dnMass::pop_front()
{
    size--;
    int *B = new int[size];
    for (int i = 0; i < size; i++)
    {
        B[i] = mass[i + 1];
    }
    delete[] mass;
    mass = B;
}
void dnMass::pop_back()
{
    size--;
    int *B = new int[size];
    for (int i = 0; i < size; i++)
    {
        B[i] = mass[i];
    }
    delete[] mass;
    mass = B;
}
void dnMass::insert(const int &pos, int *arr, const int &len)
{
    int *A = new int[size + len]{};
    for (int i = 0; i < pos; i++)
    {
        A[i] = mass[i];
    }
    for (int i = pos; i < pos + len; i++)
    {
        A[i] = arr[i - pos];
    }
    for (int i = pos + len; i < size + len; i++)
    {
        A[i] = mass[i - len];
    }
    size = size + len;
    delete[] arr;
    delete[] mass;
    mass = A;
}
void dnMass::del()
{
    delete[] mass;
}
dnMass::dnMass()
{
    mass = new int[size];
    for (int i = 0; i < size; i++)
    {
        mass[i] = 0;
    }
}