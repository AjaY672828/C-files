#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int n = 4;
    for (i = 0; i < n; i++)
    {
        // print space....
        for (j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i != 0)
        {
            // print space...
            for (j = 0; j < (2 * i - 1); j++)
            {
                cout << " ";
            }
            cout << "*";
        }
    }

    for (i = 0; i < n - 1; i++)
    {
        // print space...
        for (j = 0; j < (i + 1); j++)
        {
            cout << " ";
        }
        cout << "*";
        // print space...
        if (i != (n - 2))
        {
            for (j = 0; j < (2n - 2i - 5))
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}