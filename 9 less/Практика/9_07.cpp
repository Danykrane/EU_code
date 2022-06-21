#include <iostream>

using namespace std;

int sum(int, int);
double sum(double, double);

int main()
{

    int a = 4, b = 5;
    double a1 = 3.12, b1 = 3.45;
    cout << sum(a, b) << endl;
    cout << sum(a1, b1) << endl;
}

int sum(int a, int b)
{
    return a + b;
}

double sum(double a, double b)
{
    return a + b;
}