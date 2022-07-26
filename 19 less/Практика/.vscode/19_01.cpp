
#include <iostream>

using namespace std;

class animal
{
public:
    void move()
    {
        cout << "Животное двигается";
    }
    void eat()
    {
        cout << "Животное кушает";
    }
};

class wolf : public animal
{
public:
    void move()
    {
        cout << "Волк двигается";
    }
    void eat()
    {
        cout << "Волк кушает";
    }
};

int main()
{
    animal an;
    an.eat();
    an.move();
    wolf wo;
    wo.eat();
    wo.move();
}