#include <iostream>
#include <string>
using namespace std;


int main(){

// string name;
// cin >> name;
// cout << name;
// for (поле1; поле2; поле3){
// //тело цикла;

// }

// for (int i = 0; i < col; i++){
//     cout <<"Artyom "<<i<<endl;
// }

int col = 20;
// cin >> col;
/*
for (int i = col; i > 0; i--)
    cout <<col - i + 1<<endl;
*/
// i = i + 1;
// i += 1
cout << endl;
// for (int i = 0; i < col; i+=2){
//     /*if (i % 2 == 0)*/ cout <<i<<" ";
    
// }
    

//1 2 3 4 5 6 7 8 9 10
//кратные 10
//кратные по номеру 5 

for (int i = 0; i < col; i+=5){
  cout <<i<<" ";
    
}
cout <<endl;
for (int i = 0; i < 16; i++){
 // cout <<i + 4<<" ";
    if (i % 5 == 0 && i != 0) cout << i<<" ";
}

//кртаные по индексу 5

//2 4 6 8 10



// 5
// 1
// 2
// 3
// 4
// 5
}

//поле1 - объявл пер цилка (индексатор)
//поле2 - условие выполнения цикла
//поле3 - изменение пер цикла (шаг)