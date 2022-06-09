#include <iostream>

using namespace std;

int main()
{

    float ves[100] = {1.12, 3.14, 5.456, 9, 1.8};
    int col = 5;
    for (int i = 0; i < col; i++)
    {
        cout << ves[i] << " ";
    }

    cout << endl;
    // 1.12 3.14 5.456 9 1.8
    // pos Max 4
    // pos Min 1

    // 9 3.14 5.456 1.12 1.8
    // pos Max 1
    // pos Min 4

    int pos_min = 0;
    int pos_max = 0;

    for (int i = 0; i < col; i++)
    {
        if (ves[pos_max] > ves[i])
            pos_max = i;
        if (ves[pos_min] < ves[i])
            pos_min = i;
    }
    cout << "pos max" << pos_max + 1 << endl;
    cout << "pos min" << pos_min + 1 << endl;

    float buf = ves[pos_max];
    ves[pos_max] = ves[pos_min];
    ves[pos_min] = buf;

    //мин ми макс эл-ты мен местами

    for (int i = 0; i < col; i++)
    {
        cout << ves[i] << " ";
    }

    cout << endl;
    cout << "pos max" << pos_min + 1 << endl;
    cout << "pos min" << pos_max + 1 << endl;
}