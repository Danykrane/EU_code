#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    string name;
    double height;
    map<string, double> buildings;

    cin >> name;
    while (name != "exit")
    {
        cin >> height;
        buildings[name] = height;

        cout << "Какое здание хотите добавить еще?" << endl;
        cin >> name;
    }

    string what;
    cin >> what;

    cout << "Здание " << what << " имеет высоту " << buildings[what] << endl;
}