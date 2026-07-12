#include <iostream>
using namespace std;
int main()
{
    int rows;
    int i, j;
    cout << "Enter your rows:";
    cin >> rows;
    for (i = 1; i <= rows; i++)
    {int sum=1;
        for (j = 1; j <= rows; j++) {
            cout <<sum;
            sum++;
        }
        cout<<endl;
    }
    return 0;
}