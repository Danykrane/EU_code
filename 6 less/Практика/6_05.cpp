#include <iostream>

using namespace std;

int main()
{

    double ves[100] = {1.12, 3.14, 5.456, 9, 1.8};
    int col = 5;
    //легкая собака измерялась на 1 позици
    //тежелая собака измерялась на 4 позици

    double max_w = ves[0];
    double min_w = ves[0];
    int pos_min = 0;
    int pos_max = 0;

    for (int i = 0; i < col; i++)
    {
        if (max_w > ves[i]) {
            max_w = ves[i];
            pos_max = i;

        }

        if (min_w < ves[i]){
            min_w = ves[i];
            pos_min = i;
        }
    

    }
    cout <<"MAX val = "<<max_w<<" with pos "<<pos_max + 1<<endl;
    cout <<"Min val = "<<min_w<<" with pos "<<pos_min + 1<<endl;
}