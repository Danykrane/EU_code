#include <iostream>

using namespace std;

float disk(float , float , float );
void show(float );

int main(){
float num1, num2, num3;
cin >> num1 >> num2 >> num3;
float rez = disk(num1, num2, num3);
show(rez);
    
}

float disk(float a, float b, float c){
    return (b * b - 4 * a * c);
}

void show(float result){
    cout <<result<<endl;
}
