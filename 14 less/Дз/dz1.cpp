#include <iostream>
#include <string>

using namespace std;

class figure
{
public:
    int a;
    int b;
    

    void set(int a_, int b_)
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
    cin >> test.a >> test.b;
}

void show(double number)
{
    cout << number << endl;
}

double per(figure &test)
{
    return 2 * (test.a + test.b);
}

double sq(figure &test)
{
    return (test.a * test.b);
}

int main()
{
    figure kv1;
    read(kv1);
    show(per(kv1));
    show(sq(kv1));
}