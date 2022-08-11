#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, float> buildings;
    string what;
    string a;
    float b;
    cin >> a;
    while (a != "exit")
    {
        cin >> b;
        buildings[a] = b;

        cin >> a;
    }

    cin >> what;
    // if (buildings.count(what) == 0)
    // {
    //     cout << "Такого элемента нет" << endl;
    // }
    // else
    // {
    //     cout << buildings[what] << endl;
    // }
    cout << "здание " << what << " имеет след высоту " << buildings[what];
}