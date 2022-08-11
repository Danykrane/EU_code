#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<pair<string, string>> voc;
    string a, b;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        voc.push_back(make_pair(a, b));
    }
    for (auto &iter : voc)
    {
        cout << iter.first << " " << iter.second;
    }

    // for (auto iter = voc.begin(); iter != voc.end(); iter++)
    // {
    //     cout << iter->first << " " << iter->second;
    // }
}