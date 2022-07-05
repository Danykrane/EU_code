#include <iostream>

using namespace std;

int main()
{
    int bobk_vozr, bobi_razm, we_bo;
    bool polB;

    cout << "Введите инвормацию по бобику" << endl;

    cin >> bobk_vozr >> bobi_razm >> we_bo >> polB;

    int _vozrBars, bars_razm, ba_we;
    bool polBars;

    cout << "Введите инвормацию по бобику" << endl;

    cin >> _vozrBars >> bars_razm >> ba_we >> polBars;

    //код Александра

    cout << "Введите барсика: возраст, пол размер и вес " << endl;
    int barsik_vosrast;
    cin >> barsik_vosrast;
    int barsik_pol;
    cin >> barsik_pol;
    int barsik_razmer;
    cin >> barsik_razmer;
    int barsik_ves;
    cin >> barsik_ves;
    cout << endl;
    cout << "Введите бобика: возраст, пол размер и вес " << endl;
    int bobik_vosrast;
    cin >> bobik_vosrast;
    int bobik_pol;
    cin >> bobik_pol;
    int bobik_razmer;
    cin >> bobik_razmer;
    int bobik_ves;
    cin >> bobik_ves;
    cout << endl;
    cout << "Введите леопольда: возраст, пол размер и вес " << endl;
    int leo_vosrast;
    cin >> leo_vosrast;
    int leo_pol;
    cin >> leo_pol;
    int leo_razmer;
    cin >> leo_razmer;
    int leo_ves;
    cin >> leo_ves;
    cout << endl;
    cout << "Данные по барсику: возраст, пол размер и вес " << endl;
    cout << barsik_vosrast << " " << barsik_pol << " " << barsik_razmer << " " << barsik_ves << endl;
    cout << "Данные по бобику: возраст, пол размер и вес " << endl;
    cout << bobik_vosrast << " " << bobik_pol << " " << bobik_razmer << " " << bobik_ves << endl;
    cout << "Данные по леопольду: возраст, пол размер и вес " << endl;
    cout << leo_vosrast << " " << leo_pol << " " << leo_razmer << " " << leo_ves << endl;
}