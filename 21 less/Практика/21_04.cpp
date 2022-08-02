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
    Person(const Person &test)
    {
        this->name = test.name;              //копируем значение поля
        this->email = test.email;            //копируем значение поля
        this->age = new int(*test.age); //выделили память под переменную и занесли значение
    }

    virtual void info()
    {
        cout << "Информация о человеке: " << name << " " << *age << " " << email << endl;
    }
    string getN()
    {
        return name;
    }

    ~Person()
    {
        delete age;
    }
};

void shN(Person test)
{
    cout << "Name: " << test.getN() << endl;
}

int main()
{
    Person Alex("Alex", 18);
    Person Melman = Alex;
    Alex.info();
    Melman.info();
}
