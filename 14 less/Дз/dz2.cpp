#include <iostream>
#include <string>

using namespace std;

class figure
{

    double a;
    double b;

public:
    void set(double a_, double b_)
    {
        a = a_;
        b = b_;
        if (a < 0)
            a = 0;
        if (b < 0)
            b = 0;
    }

    int get_a()
    {
        return a;
    }
    int get_b()
    {
        return b;
    }
};

void read(figure &test)
{
    double a, b;
    cin >> a >> b;
    test.set(a, b);
}

void show(double number)
{
    cout << number << endl;
}

double per(figure &test)
{
    return 2 * (test.get_a() + test.get_b());
}

double sq(figure &test)
{
    return (test.get_a() * test.get_b());
}

void comparisson(figure &a, figure &b)
{
    double compare = 0;
    double val1 = sq(a) / per(a);
    double val2 = sq(b) / per(a);
    cout << "Отношение двух фигур равно: " << val1 / val2 << endl;
}

int main()
{
    figure kv1, kv2;
    read(kv1);
    read(kv2);
    comparisson(kv1, kv2); 
}