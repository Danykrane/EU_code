#include <iostream>
#include <string>

using namespace std;

class figure
{
    double a;
    double b;

    void check()
    {
        if (a < 0)
            a = 0;
        if (b < 0)
            b = 0;
    }

public:
    void set(double a_, double b_)
    {
        a = a_;
        b = b_;
        check();
    }

    void set(double *a_, double *b_)
    {
        a = *a_;
        b = *b_;
        check();
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

void show(figure &test)
{
    cout << test.get_a() << " " << test.get_b() << endl;
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

void sort(double *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (ptr[j] > ptr[j + 1])
            {
                double temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
            }
        }
    }
}
double *med_a(figure &a, figure &b, figure &c)
{
    double *res = new double;
    double *tmp = new double[3];
    tmp[0] = a.get_a();
    tmp[1] = b.get_a();
    tmp[3] = c.get_a();
    sort(tmp, 3);
    *res = tmp[1];
    delete[] tmp;
    return res;
}

double *med_b(figure &a, figure &b, figure &c)
{
    double *res = new double;
    double *tmp = new double[3];
    tmp[0] = a.get_b();
    tmp[1] = b.get_b();
    tmp[3] = c.get_b();
    sort(tmp, 3);
    *res = tmp[1];
    delete[] tmp;
    return res;
}
void set(figure &a, double *val1, double *val2)
{
    a.set(val1, val2);
}

int main()
{
    figure kv1, kv2, kv3;
    read(kv1);
    read(kv2);
    read(kv3);
    figure result;
    set(result, med_a(kv1, kv2, kv3), med_b(kv1, kv2, kv3));
    show(result);
}