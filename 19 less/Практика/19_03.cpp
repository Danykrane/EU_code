
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
    void move()
    {
        cout << "Волк двигается";
    }
    void eat()
    {
        cout << "Волк кушает";
    }
    void jump()
    {
        cout << "Волк прыгает";
    }
};

int main()
{
    // animal *an_ptr = new wolf;
    animal *an_ptr = new wolf;
    an_ptr->eat();
    an_ptr->move();
    an_ptr->jump();

    // figura *fig_pt = new rect(1,2);
    // // fig_pt = new tria(1,2,3);
    // fig_ptr->sq();
}