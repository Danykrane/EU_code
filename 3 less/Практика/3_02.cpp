#include <iostream>

using namespace std;

int main()
{

    int rost, dlina;
    double ves;
    bool perenoska;
    cin >> ves >> rost >> dlina >> perenoska;

    if (ves >= 1.5 && ves <= 6)
    {
        if (rost >= 30 && rost <= 90)
        {
            if (dlina >= 40 && dlina <= 150)
            {
                if (perenoska == 1)
                {
                    cout << "Проходим";
                }
                else
                    cout << "Нет пер-ки";
            }
            else
                cout << "Не прошел по длине";
        }

        else
            cout << "Не прошел по росту";
    }
    else
        cout << "Не прох по весу";
}
