#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int rows;
    cout << "Enter your rows:";
    cin >> rows;
    for (i = rows; i >= 0; i--)
    {
        for (j = i+1; j >0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}