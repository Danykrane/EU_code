#include <iostream>

using namespace std;


int main(){

int a;
	do {
		cin >> a;
		if (a == 1) {
			cout << "Январь" << endl;
		}
		if (a == 2) {
			cout << "Февраль" << endl;
		}
		if (a == 3) {
			cout << "Март" << endl;
		}
		if (a == 4) {
			cout << "Апрель" << endl;
		}
		if (a == 5) {
			cout << "Май" << endl;
		}
	} while (a >= 1 && a <= 5);
	
	// игружка в месяца

}