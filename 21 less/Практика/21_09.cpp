#include <iostream>

using namespace std;

class drob
{
private:
    int ch;
    int zn;

public:
    drob(int ch = 0, int zn = 0) : ch(ch), zn(zn) {}

    void show()
    {
        cout << ch << "/" << zn;
    }

    drob operator*(const drob &test)
    {
        int ch1, zn1;
        ch1 = this->ch * test.ch;
        return drob(ch1, zn1);
    }
};

int main()
{
    drob a(2, 5), b(4, 8);
    drob c = (a * b);
    // drob c = (a.operator*(b));
    a.show();
    c.show();

    
}