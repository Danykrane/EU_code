#include <iostream>
#include <cmath>
using namespace std;

void inc(int &num){ //работаем с переменной из main
    num++;
    cout <<"Переменная внутри = "<<num<<endl;
}

int main(){
    int a = 42;
    int b = 5;
    cout << a <<" "<<b; // 42 5
    swap(a, b); //меняет знаяения у аргументов
    cout << a <<" "<<b; //5 42
    inc(a);
    cout <<a;
}
//
//функция инкрементрования