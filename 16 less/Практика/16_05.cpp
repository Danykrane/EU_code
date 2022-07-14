#include <vector>
#include <iostream>

using namespace std;

int main()
{
//Итераторы - объект для перебора элементов конейнера = указатели
vector<int>  vec;
vec.push_back(3);
vec.push_back(2);
vec.push_back(1);
//vec.begin() - указатель на первый элемент;
// cout <<vec.begin();
vector<int>::iterator ukaz = vec.begin();
//auto - универс тип данных
auto iter = vec.begin();
cout <<*(iter + 2);

}