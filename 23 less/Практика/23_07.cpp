#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<pair<string, string> > vocabulary;
    string str1, str2;
    int cnt;
    cin >> cnt;
    for (int i = 0; i < cnt; i++)
    {
        cin >> str1 >> str2;
        vocabulary.push_back(make_pair(str1, str2));
    }

    for (auto &it : vocabulary)
    {
        cout << it.first << " " << it.second << endl;
    }
    // Задача: создайте словарь пар translator, где будет занесены слова и их переводы на английском языке.
}