#include <iostream>
#include <string>
using namespace std;

int main()
{
    pair<string, string> translate;
    // translate.first = "Cat";
    // translate.second = "Кот";
    translate = make_pair("Cat", "Кот");
    cout << translate.first << " " << translate.second;
}