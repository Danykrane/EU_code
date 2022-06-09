#include <iostream>

using namespace std;

int main()
{

    float ves[100] = {3.12, 1.14, 5.456, -9, -1.8};
    int col = 5;
    for (int i = 0; i < col; i++)
    {
        cout << ves[i] << " ";
    }
    cout << "-----------------" << endl;

    for (int i = 0; i < col; i++)
    {
        if (ves[i] < 0)
            ves[i] *= -1;
    }

    for (int i = 0; i < col; i++)
    {
        cout << ves[i] << " ";
    }
    cout << "-----------------" << endl;

    // добавл эл-та в конец
    double newp;
    cin >> newp;
    ves[col] = newp;

    col++;

    for (int i = 0; i < col; i++)
    {
        cout << ves[i] << " ";
    }
    cout <<endl;


}