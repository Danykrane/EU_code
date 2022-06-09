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
            if (j == a / 2 && i != a - 2)
            {
                cout << "#";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
}



/*

#       #
#       #
#       #
#########
        #
        #
        #
#########

#########
#   #   #
#   #   #
#   #   #
#########
    #   
    # 
    #
    #  


#########
#       #
#       #
#       #
#########
#       #
#       #
#       #
#       #


*/