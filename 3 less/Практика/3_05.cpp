#include <iostream>

using namespace std;

int main() {

// цикл while


// while(условие){

//  //тело цикла


// }

//вывести кажд цифр числа

// 54123
// 3
// 2
// 1
// 4
// 5
//5 / 10 = 0
long long int a;
cin >> a;
//if(a); //if (a != 0)
//
// if (a < 0) {
//     a *= -1;
//     cout <<"Число отриц"<<endl;
// }
/*
long long int a;
cin >> a;

while(a > 0){
    cout << a % 10<<endl;
    // a = a / 10;
    a /= 10;
}
*/

// посчитать кол-во цифр в числе
// 647836578346578 
/*
73248

1 
cnt 1
7324

2
cnt 2
732

3
cnt 3
73

4
cnt 4
7

5
cnt 5
0
*/


// реализ попрошайку пока не нажмешь 4 просит ввести числор

int cnt = 0;


while (a > 0){
    cnt++;
    a /= 10;
}
cout << cnt;



return 0;
}