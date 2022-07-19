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
    }
    Animal &sum(const Animal &an){
        this->age += an.age;
        return *this;
    }
    void show()
    {
        cout << name << " " << age;
    }
};

int main()
{
    Animal Cat("Barsik", 12), Lion("Alex", 8);
    Cat.sum(Lion).show(); // this = Cat
}
