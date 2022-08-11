#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, double> medicalMeasure;

    medicalMeasure["Marti"] = 14.5;
    medicalMeasure["Gloria"] = 10.15;
    medicalMeasure["Melmon"] = 30.15;

    // 1 способ
    for (auto &it : medicalMeasure)
    {
        cout << it.first << " " << it.second << endl;
    }

    // 2 способ
    for (auto it = medicalMeasure.begin(); it != medicalMeasure.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    // 3 способ
    for (auto it = medicalMeasure.begin(); it != medicalMeasure.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
}