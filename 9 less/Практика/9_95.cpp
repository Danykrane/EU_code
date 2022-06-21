#include <iostream>

using namespace std;

void show(int [100], int);

int main(){

    int arr[100] = {};
    int n;
    cin >> n;
    for (int i = 0; i < n;i++){
        arr[i] = i + 1;
    }
    show(arr, n);
}

void show(int mas[100], int col){
    for (int i = 0; i < col; i++){
        cout <<mas[i]<<" ";
    }
}