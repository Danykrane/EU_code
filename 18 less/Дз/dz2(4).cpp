#include <iostream>
#include <string>
#include <vector>

using namespace std;

class man
{
private:
    string name;
    int xp;
    int sp;
    int hp;
    int dam;

public:
    man(string name = " ", int xp = 0, int sp = 5, int hp = 3, int dam = 20) : name(name), xp(xp), sp(sp), hp(hp), dam(dam) {}
    void set_name(string test)
    {
        name = test;
    }
    void read()
    {
        cout << "Введите имя: " << endl;
        cin >> name;
    }
    void show()
    {
        cout << "Информация об игроке: " << endl;
        cout << name << ", " << xp << " xp, " << sp << " sp, " << hp << " hp, " << dam << " dam. " << endl;
    }
};

int main()
{
    int n;
    cin >> n;
    man *man_ptr;
    vector<man *> vec(n);
    for (int i = 0; i < n; i++)
    {
        man_ptr = new man;
        man_ptr->read();
        vec.push_back(man_ptr);
    }
    for (int i = 0; i < n; i++)
    {
        vec[i]->read();
    }

    for (int i = 0; i < n; i++)
    {
        delete[] vec[i];
    }
    delete[] man_ptr;
}