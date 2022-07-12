#include <iostream>
#include <string>

using namespace std;
class stMass
{
    int size;
    int A[100];

public:
    stMass(int size = 0) : size(size)
    {
        for (int i = 0; i < size; i++)
        {
            A[i] = 0;
        }
    }

    void insert()
    {
        for (int i = 0; i < size; i++)
        {
            cin >> A[i];
        }
    }

    void show()
    {
        for (int i = 0; i < size; i++)
        {
            cout << A[i] << " ";
        }

        cout << endl
             << endl;
    }

    int getIndexVal(int index)
    {
        return A[index];
    }

    void change(int index, int value)
    {
        A[index] = value;
    }

    void push_back(int value)
    {
        A[size] = value;
        size++;
    }

    void pop_back()
    {
        size--;
    }
};
