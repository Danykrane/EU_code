#include <iostream>

using namespace std;

int main()
{

double vesps[] = {7, 13, 2, 5, 9, 20, 1, 6, 3, 4};
    int size = sizeof(vesps) / sizeof(vesps[0]);
    cout << sizeof(vesps[0])<<endl;
    cout << size<<endl;

    for (int i = 0; i < 10 - 1; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            if (vesps[j] > vesps[j + 1])
                swap(vesps[j], vesps[j + 1]);
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << vesps[i] << " ";
    }
}