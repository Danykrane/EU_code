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
    int *ptr = new int[2];
    ptr[0] = 3;
    ptr[1] = 11;
    vec.insert(vec.begin() + 2, ptr[1]); //вставка элемента 46 на на эл-т с индексом 2
    for (auto iter = vec.begin(); iter != vec.end(); iter++)
    {
        cout << *iter << " ";
    }

    //приход собаки указ их кол-во n
    //счит вес (вещ)

    //пришли коты (век) их кол-во
    //считаали вес

    //встаивть на поз k
}