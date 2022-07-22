#include <iostream>
using namespace std;
class floor
{
protected:
    double a;
    double b;

public:
    floor(double a = 0, double b = 0) : a(a), b(b) {}

    double square()
    {
        return a * b;
    }
};

class room : public floor
{
private:
    double c;

public:
    room(double a = 0, double b = 0, double c = 0) : floor(a, b), c(c) {}
    double V()
    {
        return square() * c;
    }

    room &change(double num1, double num2)
    {
        this->a += num1;
        this->b += num2;
        return *this;
    }
    void change(double num1, double num2)
    {
        this->a += num1;
        this->b += num2;
    }
};

int main()
{
    double st1 = 1.12;
    double st2 = 2.12;
    double st3 = 4.12;

    room One(st1, st2, st3);
    // cout << One.square() << endl;
    // cout << One.V()<<endl;
    cout << One.change(2, 4).V();

    // change(a,b) - ф-ия, кот приьавл +a к длине и +b к ширине
}