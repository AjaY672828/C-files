#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int rows;
    cout << "Enter yours rows:"; // 4
    cin >> rows;
    for (i = rows; i >= 0; i--)
    {
        char ch = 'E';
        for (j = i + 1; j > 0; j--)
        {
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
    return 0;
}