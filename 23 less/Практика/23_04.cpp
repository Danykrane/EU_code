#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    string str;
    double rost;
    map<string, double> medicalMeasure = {{"Marti", 14.5},
                                          {"Gloria", 10.15},
                                          {"Melmon", 30.15}};

    medicalMeasure["Marti"] = 14.5;
    medicalMeasure["Gloria"] = 10.15;
    medicalMeasure["Melmon"] = 30.15;

    cin >> str;
    // while (str != "exit")
    // {
    //     cin >> rost;
    //     medicalMeasure[str] = rost;

    //     cout << "Кого хотите добавить еще?" << endl;
    //     cin >> str;
    // }

    while (str != "exit")
    {
        cin >> rost;
        medicalMeasure.insert(pair<string, double>(str, rost));

        cout << "Кого хотите добавить еще?" << endl;
        cin >> str;
    }

    // 1 способ
    for (auto &it : medicalMeasure)
    {
        cout << it.first << " " << it.second << endl;
    }
}