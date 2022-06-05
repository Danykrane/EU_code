#include <iostream>

using namespace std;

int main(){
    
    unsigned short kletka, srok;
    cout <<"Введите дату изготовления клетки"<<endl;
    cin >>kletka;
    
    cout <<"Введите срок службы клетки"<<endl;
    //int srok;
    cin >> srok; //6 лет * 0.66
    srok = srok * 0.66;
    // int lsrok = srok * 0.66;
    
    //srok *= 0.66;

    cout <<"Клетка выйдет из эксплуатации в "<<kletka + lsrok<<" лилипутском году"<<endl;

    /*
    int per1;
    cout << "Введите значение переменной"<<endl;
    cin >> per1;
    cout <<"Значения ее разрядов: "<<endl;
    cout <<per1/10000000<<" ";
    cout <<per1/1000000 % 10<<" ";
    cout <<per1/100000 % 10<<" ";
    cout <<per1/10000 % 10<<" ";
    cout <<per1/1000 % 10<<" ";
    cout <<per1/100 % 10<<" ";
    cout <<per1/10 % 10<<" ";
    cout <<per1 % 10;
  

*/

/*
    int per = 12345678;
    cout << "Введите значение переменной"<<endl;
    cin >> per;
    cout <<"Лесенка из значений ее разрядов: "<<endl;
    cout <<per/10000000<<endl;
    cout <<per/1000000 % 100<<endl;
    cout <<per/100000 % 1000<<endl;
    cout <<per/10000 % 10000<<endl;
    cout <<per/1000 % 100000<<endl;
    cout <<per/100 % 1000000<<endl;
    cout <<per/10 % 10000000<<endl;
    cout <<per % 100000000<<endl;
*/

}