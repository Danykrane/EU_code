#include <iostream>

using namespace std;

int main() {

int val;
cin >> val;
bool flag = (val >= 2 && val <= 8);
if (flag) cout <<"Число принадлежит промежутку";
//то же самое что и if (flag != 0)
else cout <<"Не принадлежит";
}
