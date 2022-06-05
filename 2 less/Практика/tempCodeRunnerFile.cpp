cin >> mes;
if (mes == 12) mes = 0;
switch (mes) {
case 0 ... 2: cout << "Зима"; break;
case 3 ... 5: cout << "Весна"; break;
case 6 ... 8: cout << "Лето"; break;
case 9 ... 11: cout << "Осень"; break;
default: cout << "Ne mon";break;
}