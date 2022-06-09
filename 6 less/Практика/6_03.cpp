#include <iostream>

using namespace std;

int main()
{
//вет клиника. Животное становится на весы
//адм вводит кол-во животных
//вводим вес кажд животного
//вывести вес каждого жвотного

// int col = 5;
// cin >> col;

double ves[100] = {1.12, 3.14, 5.456, 9, 1.8};
int col = 5;
//double ves[col]; //нельзя

// int col;
// cin >> col;

//сумму весов живот
//произведение весов животных

for (int i = 0; i < col;i++){
    cin>> ves[i];
}

for (int i = 0; i < col;i++){
    cout <<ves[i]<<" ";
}

}