#include <iostream>

using namespace std;

int main()
{

    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (((j == 0 || j == a -1)&&( i < a /2)) || j == a/2 || i == 0 || i == a /2)
            {
                cout << "#";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
}