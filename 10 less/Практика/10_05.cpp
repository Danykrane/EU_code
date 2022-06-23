#include <iostream>

using namespace std;

int main(){

int *ptr = new int(42); //мы выделили 4 байт в дин памняти и иниц 42
double *ptr_d = new double(42.5);
//тип указателя = тип переменной

int ageCat = 15;
int *page = &ageCat;
cout <<page<<" "<<&ageCat<<endl;
//*page //взятие значения по адресу (разыменовывание)
cout<<*page<<endl;

cout <<ageCat<<endl;
}