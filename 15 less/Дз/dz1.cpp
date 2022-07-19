#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    double a;
    double b;

public:
    Point(double a = 1, double b = 0) : a(a), b(b) {}

    double getA()
    {
        return a;
    }
    double getB()
    {
        return b;
    }
    double &rasst(const Point &b)
    {
        this->a = this->a * b.a;
        return a;
    }
};

double rasst(Point &a, Point &b)
{
    return sqrt(pow((a.getA() - b.getA()), 2) + pow(a.getB() - b.getB(), 2));
}

int main()
{
    Point k, l(4, 38);
    //cout << k.rasst(l) << endl;
    cout << rasst(k, l);
}