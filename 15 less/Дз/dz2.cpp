#include <iostream>
#include <cmath>
using namespace std;

class point
{
private:
    int x;
    int y;
    int z;

public:
    point()
    {
        x = 0;
        y = 0;
        z = 0;
    }
    point(int x_)
    {
        x = x_;
        y = 0;
        z = 0;
    }
    point(int x_, int y_)
    {
        x = x_;
        y = y_;
        z = 0;
    }
    point(int x_, int y_, int z_)
    {
        x = x_;
        y = y_;
        z = z_;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    int getZ()
    {
        return z;
    }
};

double rasst(point &A, point &B)
{
    double r_x = abs(A.getX() - B.getX());
    double r_y = abs(A.getY() - B.getY());
    double r_z = abs(A.getZ() - B.getZ());
    double rasst_x = r_x * r_x;
    double rasst_y = r_y * r_y;
    double rasst_z = r_z * r_z;
    double res = sqrt(rasst_x + rasst_y + rasst_z);
    return res;
}

void show(double a)
{
    cout << a;
}

void show_point(point &test)
{
    cout << test.getX() << ":" << test.getY() << ":" << test.getZ() << endl;
}

int main()
{
    point a;
    point b(5, 6, 8);
    show_point(a);
    show_point(b);
    cout << rasst(a, b);

    return 0;
}