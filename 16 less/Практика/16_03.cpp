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
    //vector<int> animals(len);
    vector<int> animals;
    cout << animals.size() << endl;
    // animals.sizse() - подсчет кол-ва элем

    //.resize()
    int temp = 10;
    animals.resize(temp);
    cout << animals.size();
    // push_back(val) вставка в конец эл-та val
    // pop_back()
    animals.pop_back();
    cout << animals.size();


    //считайте в вектор значения пока я не ввел 0
}