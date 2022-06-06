#include <iostream>

using namespace std;

int main()
{

    unsigned int num;
    unsigned short int min = 10;
    unsigned short int max = 0;
    cin >> num;

    if (num == 0) min = 0;

    while(num){
        int rzr = num % 10;
        if(rzr < min) min = rzr;
        if(rzr > max) max = rzr;
        num/=10;
    }

    
    cout << max<<" "<<min;

}