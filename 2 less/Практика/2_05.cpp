#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
int a = 0;

cout<< a++;




// if (mes == 1) cout <<"Январь";
// else if (mes == 2) cout <<"Февраль";
// else if (mes == 3) cout <<"Март";
// else cout <<"Вы не правильно указали";

unsigned short int mes;
cin >> mes;
if (mes == 12) mes = 0;
switch (mes) {
case 0 ... 2: cout << "Зима"; break;
case 3 ... 5: cout << "Весна"; break;
case 6 ... 8: cout << "Лето"; break;
case 9 ... 11: cout << "Осень"; break;
default: cout << "Неправильно введенный";break;
}

switch(mes) {
  case 1:
    cout <<"Январь";
    break;
  case 2:
    cout <<"Февраль";
    break;

   case 3:
    cout <<"Март";
    break; 
  default:
    cout <<"Вы не правильно указали";
}

// 

}