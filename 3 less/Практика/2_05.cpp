#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){


unsigned short int mes;
cin >> mes;


// if (mes == 1) cout <<"Январь";
// else if (mes == 2) cout <<"Февраль";
// else if (mes == 3) cout <<"Март";
// else cout <<"Вы не правильно указали";

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

}