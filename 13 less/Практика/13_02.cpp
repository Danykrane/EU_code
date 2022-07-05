//Класс - тип данных
//Объект - экземпляр класса
//Поле - переменные, кот мы объявили внутри класса
//Методы - ф-ии , кот мы объявили внутри класса
/*
class[название]
{
    public: // модификатор доступа
    //тело класса
};
*/

#include <iostream>
#include <string>

using namespace std;

class Zh1
{
public:
    string name;
    int col;
    bool hel;
};

class Zh2
{
public:
    string nam;
    int razm;
    int year;
};


int main()
{
    Zh1 dom1, dom2; //экземпляры класса  ZH1
    //для обращения к полю оюъекта используется "."
    dom1.col = 10; //обращение к полю
    cin >> dom1.name >> dom1.col >> dom1.hel;
    cout << dom1.name << dom1.col << dom1.hel;
    cin >> dom2.name >> dom2.col >> dom2.hel;
    cout << dom2.name << dom2.col << dom2.hel;

    Zh2 ho1, ho2; //экземпляры класса  ZH2
    cin >> ho1.nam;
    cin >> ho1.nam;

}