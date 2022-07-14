#include <vector>
#include <iostream>

using namespace std;

int main()
{
    //Итераторы - объект для перебора элементов конейнера = указатели
    vector<int> vec(4);

    for (auto iter = vec.begin(); iter != vec.end(); iter++)
    {
        cin >> *iter;
    }

    for (auto iter = vec.begin(); iter != vec.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
    //удаление

    // vec.erase(vec.begin() + 2); //удаление с индексом 2
    vec.erase(vec.begin(), vec.begin() + 2); //удаление первыых 2 удаление до второго аргумента не включ
    for (auto iter = vec.begin(); iter != vec.end(); iter++)
    {
        cout << *iter << " ";
    }
}