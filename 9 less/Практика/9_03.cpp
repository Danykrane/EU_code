#include <iostream>

using namespace std;

float per(float a, float b)
{
    float rez = a + b;
    return 2 * rez;
}

float pl(float a, float b)
{
    return a * b;
}

void show(float rez)
{
    cout << rez << endl;
}

// void input(float a, float b)
// {
//     a = 1;
//     b = 1;
//     cout << "Input values: ";
//     cin >> a >> b;
// }

float input()
{
    cout << "Input value: ";
    float buf;
    cin >> buf;
    return buf;
}

int main()
{
    float dlina = 0, shir = 0;
    dlina = input();
    shir = input();
    show(dlina);
    show(shir);

    // cin >> dlina >> shir;
    float perim = per(dlina, shir);
    float sq = pl(dlina, shir);
    show(perim);
    show(sq);
    // cout << "пер = " << per(dlina, shir) << endl;
    // cout << "площадь = " << pl(dlina, shir) << endl;
}