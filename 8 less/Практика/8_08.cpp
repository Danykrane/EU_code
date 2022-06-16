#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    //замена макс и мин эл-та
    int arr[100][100];
    int n, m;
    cin >> n >> m;
    srand(time(0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            arr[i][j] = -34 + (rand() % static_cast<int>(100 - -34 + 1));

    int ind_maxi = 0;
    int ind_maxj = 0;
    int ind_mini = 0;
    int ind_minj = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[ind_maxi][ind_maxj] < arr[i][j])
            {
                ind_maxi = i;
                ind_maxj = j;
            }

            if (arr[ind_mini][ind_minj] > arr[i][j])
            {
                ind_mini = i;
                ind_minj = j;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << setw(4) << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nМакс: " << arr[ind_maxi][ind_maxj] << "\nМин: " << arr[ind_mini][ind_minj];
    swap(arr[ind_maxi][ind_maxj], arr[ind_mini][ind_minj]);
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << setw(4) << arr[i][j] << " ";
        }
        cout << endl;
    }
}