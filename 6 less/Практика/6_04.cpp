#include <iostream>

using namespace std;

int main()
{

    double ves[100] = {1.12, 3.14, 5.456, 9, 1.8};

    int col = 5;

    double cnt = 0;
    double mlt = 1;

    for (int i = 0; i < col; i++)
    {
        cnt += ves[i];
        mlt *= ves[i];
    }

    cout << "Общий вес: " << cnt << "\nОбщее произведение весов: " << mlt << endl;
}