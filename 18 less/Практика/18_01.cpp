#include <iostream>
#include <string>

using namespace std;

class Animal
{
    int age;
    string name;

public:
    Animal(string name = " ", int age = 0)
    {
        this->name = name;
        this->age = age;
        // (*this).age = age;
    }
};

int main()
{
    Animal Cat("Barsik", 12);
}
