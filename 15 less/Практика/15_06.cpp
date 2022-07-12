#include <iostream>
#include <string>

using namespace std;
class stMass
{
    int size;
    int *A; //указ на дин массив

public:
    stMass(int size = 0) : size(size)
    {
        A = new int[size]; //создали дин массив
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
    void del()
    {
        delete[] A;
    }
    int getIndexVal(int index)
    {
        return A[index];
    }

    void change(int index, int value)
    {
        A[index] = value;
    }

    void push_back(const int &value)
    {
        //добавление в конец
    }

    void push_front(const int &value)
    {
        //добавление в начало
    }

    void pop_front(const int &value)
    {
        //удаление первого элемента
    }
    void insert(const int &pos, const int *arr, const int &len)
    {
        //вставка динамического массива arr длины len на позицию pos
    }

    void del()
    {
        //чистка памяти
    }

    void pop_back()
    {
        size--;
        int *temp = new int[size];
        for (int i = 0; i < size; i++)
        {
            temp[i] = A[i];
        }
        delete[] A;
        A = temp;
    }
};

int main()
{
    int size;
    cin >> size;
    stMass mass(size);
    mass.insert();
    mass.show();
    mass.push_back(42);
    mass.show();
    mass.pop_back();
    mass.show();
    cout << mass.getIndexVal(2) << endl;
    mass.show();
    mass.change(2, 45);
    mass.show();
    mass.del();
}