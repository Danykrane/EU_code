#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

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
        cout << ch << "/" << zn << endl;
    }
    drob operator*(const drob &test)
    {
        drob res(this->ch * test.ch, this->zn * test.zn);
        return res;
    }
    drob operator+(const drob &test)
    {
        drob res(this->ch * test.zn + this->zn * test.ch, this->zn * test.zn);
        return res;
    }
    drob operator-(const drob &test)
    {
        drob res(this->ch * test.zn - this->zn * test.ch, this->zn * test.zn);
        return res;
    }
    drob operator-()
    {
        drob res(this->ch * -1, this->zn);
        return res;
    }
    drob operator+(const int &test)
    {
        drob other(test * 3, 3);
        drob res(this->ch * other.zn + this->zn * other.ch, this->zn * other.zn);
        return res;
    }

    friend drob operator+(const int &, const drob &); //дружественная функция
};

drob operator+(const int &test, const drob &ty)
{
    drob res(test * ty.zn + ty.ch, ty.zn);
    return res;
}

int main()
{
    drob a(7, 9), b(3, 5);
    drob c = 5 + a + 2;
    drob d = a + 5 + 2;
    a.show();
    c.show();
    d.show();
}