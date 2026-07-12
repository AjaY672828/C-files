#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter your number:";
    cin>>num;
    int i = 1;
    int sum = 0;
    while (i <= num)
    {
        sum = sum + i;
        i++;
        if (i == 2)
        {
            break;
        }
    }
    cout << "Sum of n numbers is: " << sum << endl;
    return 0;
<<<<<<< HEAD:sum.cpp
}
=======
}   
>>>>>>> 2e2204d3d1b8e2cd48b5e8dca667a9e05ed6f533:sum_breakStatement.cpp
