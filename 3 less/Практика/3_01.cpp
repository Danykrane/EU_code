#include <iostream>
#include <stdlib.h>
#include <clocale>
#include <math.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, operation;
	cin >> a >> b >> operation;
	cout << "Введите a и b: ";
	cout << "Какую операцию хотите сделать?" << endl;
	cout << "1 - Сложение" << endl;
	cout << "2 - Вычитание" << endl;
	cout << "3 - Умножение" << endl;
	cout << "4 - Деление" << endl;
	cout << "5 - Возведение в степень" << endl;
	cout << "6 - Логарифм по основанию a числа b" << endl;

	if (operation == 1) {
		cout << "Результат действия равен " << a + b << endl;
	}
	else if (operation == 2) { 
		cout << "Результат действия равен " << a - b << endl; 
	}
	else if (operation == 3) {
		cout << "Результат действия равен " << a * b << endl; 
	}
	else if (operation == 4) {
		cout << "Результат действия равен " << a / b << endl; 
	}
	else if (operation == 5) {
		cout << "Результат действия равен " << pow(a, b) << endl;
	}
	else if (operation == 6) { 
		cout << "Результат действия равен " << log(b) / log(a) << endl; 
	}
	else if ((a * b > 4000000) || (pow(a, b) > 4000000)) {
		cout << "Число слишком большое " << endl;
	}
	else { cout << "Вы неправильно указали номер" << endl; 
	}

	system("pause");

	return 0;
}