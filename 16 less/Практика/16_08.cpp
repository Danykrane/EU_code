//приход собаки указ их кол-во n
//счит вес (вещ)

//пришли коты (век) их кол-во
//считаали вес

//встаивть на поз k
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int col;
    cin >> col;
    vector<double> dogs(col);
    for (auto iter = dogs.begin(); iter != dogs.end(); iter++)
    {
        cin >> *iter;
    }
    int colKats;
    cin >> colKats;
    vector<double> cats(colKats);
    for (auto iter = cats.begin(); iter != cats.end(); iter++)
    {
        cin >> *iter;
    }

    int pos;
    cin >> pos;
    for (int i = 0; i < cats.size(); i++)
    {
        dogs.insert(dogs.begin() + pos, cats[i]);
    }
    for (auto iter = dogs.begin(); iter != dogs.end(); iter++)
    {
        cout << *iter << " ";
    }
    // 123 220 234 340 400 520 820
    sort(dogs.begin(), dogs.end());    // - сортировка
    reverse(dogs.begin(), dogs.end()); //переворрот вектора
    cout << endl;
    for (auto iter = dogs.begin(); iter != dogs.end(); iter++)
    {
        cout << *iter << " ";
    }
}
