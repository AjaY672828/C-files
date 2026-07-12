#include <iostream>
using namespace std;
int main(){                                               //print on screen alphabet square pattern using another method.....
    int rows;
    cout << "Enter your numbers of rows:";
    cin >> rows;
    int i, j;
    for (i = 1; i <= rows; i++)
    {
        char ch = 'A';
        for (j = 1; j <= rows; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
    return 0;
}