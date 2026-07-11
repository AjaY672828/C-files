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
}