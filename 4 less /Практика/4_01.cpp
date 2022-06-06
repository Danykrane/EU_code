#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

int main() {
	
	int a;
	int cnt = 0;
	cout << "Введите переменую " << endl;
	cin >> a;
	while (a) {
		cnt++;
		a /= 10;

	}
	cout << cnt;
	int razm = cnt;
	int i = 0;
	bool check = 0;
	//1234321 - 7

	

	while(cnt){
        int step = pow(10, razm - 1 - i);
		int lef = a/step % 10;
		int prav = a/pow(10, i) % 10;
		if (lef != prav) check = 1;
		cnt--;
		i++;
	}

	if(check) cout <<"Нет";
	else cout << "Палиндром";

	
	system("pause");

}