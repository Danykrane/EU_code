//Дин массив- масс, разм кот может меняться во время вы программы
// vector - одн дин массив

#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> animals;
    int temp;
    cin >> temp;
    cout << animals.size() << endl;
    while (temp)
    {
        animals.push_back(temp);
        cin >> temp;
    }
    cout << animals.size() << endl;
    for (int i = 0; i < animals.size(); i++)
    {
        cout << animals[i] << " ";
    }


    //удалите 2 посл элемента
    animals.resize(animals.size() - 2);
}