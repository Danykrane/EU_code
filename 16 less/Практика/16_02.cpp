//Дин массив- масс, разм кот может меняться во время вы программы
// vector - одн дин массив

#include <vector>
#include <iostream>

using namespace std;

int main()
{
    // vector<тип данных> название (размер вектора);
    int len;
    cin >> len;
    vector<int> animals(len);
    for (int i = 0; i < animals.size(); i++)
    {
        cin >> animals[i];
    }
    //animals.size() - подсчет кол-ва элем

    for (int i = 0; i < animals.size(); i++)
    {
        cout << animals[i] <<" ";
    }

    
}