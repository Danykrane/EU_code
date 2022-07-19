#include <iostream>
#include <string>

using namespace std;

class Animal
{
    // private:
    string name;
    int opit;
    double ves;
    double skorost;
    int col;

    public: 
    void setAll(string nick, int xp, double we, double vel, int count){
        name = nick;
        opit = xp;
        ves = we;
        skorost = vel;
        col = count;
    }

    string getN(){
        return name;
    }

    int getX()


    // void read()
    // {
    //     cout << "Введите имя: " << endl;
    //     cin >> name;
    //     cout << "Введите сколько опыта: " << endl;
    //     cin >> opit;
    //     cout << "Введите вес инвентаря:" << endl;
    //     cin >> ves;
    //     cout << "Введите скорость:" << endl;
    //     cin >> skorost;
    //     cout << "Введите кол-во жизни:" << endl;
    //     cin >> col;
    // }
    // void show()
    // {
    //     cout << "Персонаж создан!" << endl;
    //     cout << "Его информация:" << name << ", " << opit << ", "
    //          << "xp, " << ves << " kg, " << skorost << " sp, " << col << " hp ";
    // }
};
void valid(Animal &test)
{
    if (test.opit < 0)
    {
        test.opit = 0;
    }
}
void proverka(Animal &test)
{
    (test.col > 10)  ? test.col = 10 : (test.col < 0)?test.col = 0:test.col;
}
int main()
{
    Animal kot, pes, bars;
    read(kot);
    show(kot);
    valid(kot);
    proverka(kot);
    show(kot);
}
