#include <iostream>
#include <stdlib.h>
#include <clocale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	unsigned int a;

	cout << "Введите переменую " << endl;
	cin >> a;
	while (a) {//a!= 0
		cout << a % 10 << " ";
		a /= 10;
        
        //123456
       
	}
	system("pause");

}