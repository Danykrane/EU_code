
#include <iostream>

using namespace std;

class animal
{
public:
    virtual void move()
    {
        cout << "Животное двигается" << endl;
    }
    virtual void eat()
    {
        cout << "Животное кушает";
    }
};

class wolf : public animal
{
public:
    virtual void move()
    {
        cout << "Волк двигается";
    }
    virtual void eat()
    {
        cout << "Волк кушает";
    }
};

int main()
{
    animal *an_ptr = new wolf;
    an_ptr->eat();
    an_ptr->move();
}