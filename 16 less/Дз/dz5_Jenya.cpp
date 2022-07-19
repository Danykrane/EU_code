#include <vector>
#include <iostream>
#include <algorithm> //библиотека для сортировки

using namespace std;

void read(vector<double> &test)
{
    for (auto iter = test.begin(); iter < test.end(); iter++)
    {
        cin >> *iter;
    }
}

void show(vector<double> &test)
{
    for (auto iter = test.begin(); iter < test.end(); iter++)
    {
        cout << *iter;
    }
}

int main()
{
    int col1;
    cin >> col1;
    vector<double> shop1(col1);
    read(shop1);
    int col2;
    cin >> col2;
    vector<double> shop2(col2);
    read(shop2);

    for (auto iter = shop2.begin(); iter < shop2.end(); iter++)
    {
        shop1.push_back(*iter);
    }
    sort(shop1.begin(), shop1.end()); //уже есть функция в algorithm
    cout << " Novyi razmer korziny " << shop1.size() << endl;
    show(shop1);
}
