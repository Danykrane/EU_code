#include <iostream>

using namespace std;

int sum_int(int, int);
double sum_dpl(double, double);

int main()
{

    int a = 4, b = 5;
    double a1 = 3.12, b1 = 3.45;
    cout << sum_int(a, b) << endl;
    cout << sum_dpl(a1, b1) << endl;
}

int sum_int(int a, int b)
{
    return a + b;
}

double sum_dpl(double a, double b)
{
    return a + b;
}