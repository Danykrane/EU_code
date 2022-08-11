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
    medicalMeasure["Gloria"] = 25.15;

    cout << medicalMeasure["Gloria"] << endl;
}