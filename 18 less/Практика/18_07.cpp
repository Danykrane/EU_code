#include <iostream>
#include <string>

using namespace std;

class A
{
protected:
    int x;
    int y;

public:
    int r;
    A(int x, int y = 3) : x(x), y(y) {}
    void showV()
    {
        cout << x << y;
    }
};

class B : public A
{
private:
    int z;

public:
    B(int x, int y = 3, int z = 3) : A(x, y), z(z) {}
    void show()
    {
        showV();
        cout << z;
    }
};

int main()
{
    B dot(2, 3, 4);
    dot.show();
}
