#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int num;
    cout << "Enter your number:";
    cin >> num;
    int sum = 0;
    for (i = 1; i <= num; i++)
    {
        if ((i % 2) != 0)
        {
            sum = sum + i;
        }
    }
    cout << sum << endl;
    return 0;
}