#include <iostream>
#include <cmath>
using namespace std;

class dnMass
{
    int size;
    int *mass;

public:
    dnMass(int size = 0) : size(size)
    {
        mass = new int[size];
        for (int i = 0; i < size; i++)
        {
            mass[i] = 0;
        }
    }
    ~dnMass()
    {
        cout << "ф-ия деструктора" << endl;
        delete[] mass;
    }

    void insert()
    {
        for (int i = 0; i < size; i++)
        {
            cin >> mass[i];
        }
    }
    void show()
    {
        for (int i = 0; i < size; i++)
        {
            cout << mass[i] << " ";
        }

        cout << endl
             << endl;
    }
};
int main()
{
    int size;
    cin >> size;
    dnMass mass(size);
    mass.insert();
    mass.show();

    dnMass arr1(size);
    arr1.insert();
    arr1.show();

    //Деструктор - фукция (метод), кот вып при выходе объекта из видимости ф-ии main()
    //~имя класса()
    //{
    //тело деструктора
    //}
    return 0;
}