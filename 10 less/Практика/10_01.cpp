#include <iostream>
#include <cmath>
using namespace std;

double square(double a, double b, double c);
double square(int a, int b, int c);

int main()
{
    cout << square(3, 4, 5) << endl;
    cout << square(13.1, 6.3, 15.3);
}

double square(double a, double b, double c)
{
    double p = ((a + b + c) / 2);
    double res = sqrt(p * (p - a) * (p - b) * (p - c));
    return res;
}

double square(int a, int b, int c)
{
    double p = ((a + b + c) / 2);
    double res = sqrt(p * (p - a) * (p - b) * (p - c));
    return res;
}