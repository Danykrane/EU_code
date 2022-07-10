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
    void setAll(string name, int opit, double ves, double skorost, int col)
    {
        if (skorost < 0)
            skorost = 0;
        if (ves < 0)
            ves = 0;
        name = name;
        opit = opit;
        ves = ves;
        skorost = skorost;
        col = col;
    }

    string getN()
    {
        return name;
    }

    int getXP()
    {
        return opit;
    }

    double GetW()
    {
        return ves;
    }

    double getV()
    {
        return skorost;
    }

    int getcol()
    {
        return col;
    }

    // void show()
    // {
    //     cout << "Персонаж создан!" << endl;
    //     cout << "Его информация:" << name << ", " << opit << ", "
    //          << "xp, " << ves << " kg, " << skorost << " sp, " << col << " hp ";
    // }
};

void scan(string &nick, int &xp, double &we, double &vel, int &count)
{
    cin >> nick >> xp >> we >> vel >> count;
}
void read(Animal &test)
{
    string names;
    int op;
    double we;
    double vel;
    int count;
    // scan(nam, xp, we, vel,count);
    cin >> names >> op >> we >> vel >> count;
    // if (vel < 0) vel = 0;
    // if (we < 0) we = 0;
    test.setAll(names, op, we, vel, count);
}

void show(Animal &test)
{
    cout << "Персонаж создан!" << endl;
    cout << "Его информация:" << test.getN() << ", " << test.getXP() << ", "
         << "xp, " << test.GetW() << " kg, " << test.getV() << " sp, " << test.getcol() << " hp ";
}

int main()
{
    Animal kot;
    read(kot);
    show(kot);
}
