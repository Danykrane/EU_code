#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Person
{
protected:
    string name;
    int *age;
    string email;

    virtual void read()
    {
        cout << "Введите email адресс " << endl;
        cin >> email;
        valid();
    }
    virtual void valid()
    {
        auto begin = email.begin(), end = email.end();
        if ((begin = find(begin, end, '@')) != end &&
            find(begin, end, '.') != end)
        {
            cout << "Email accepted" << std::endl;
        }
        else
        {
            cout << "Email rejected" << std::endl;
            read();
        }
    }

public:
    Person(string name = " ", int age = 0, string email = " ") : name(name), email(email)
    {
        this->age = new int(age);
        if (name == " ")
            name = "Имя не введено";
        valid();
    }
    
    virtual void info()
    {
        cout << "Информация о человеке: " << name << " " << *age << " " << email << endl;
    }

    ~Person()
    {
        delete age;
    }
};

int main()
{
    Person Alex("Alex", 18);
    Person Melmon = Alex;
    Melmon.info();
}


// void show(int &num){
//     cout <<num;
// }


// int main(){
//     int a = 42;
//     show(a);
// }