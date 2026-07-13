#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int rows;
    cout << "Enter yours rows:";
    cin >> rows;
    for (i = rows; i >= 0; i--)
    {
        for (j = i + 1; j > 0; j--)
        {
            cout <<j;
        }
        cout<<endl;
    }
    return 0;
}