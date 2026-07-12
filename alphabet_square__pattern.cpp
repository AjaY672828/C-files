<<<<<<< HEAD
#include <iostream>
using namespace std;
//Alphabet Square Pattern ..................
int main()
{
    int rows;

    cout << "Enter your numbers of rows:";
    cin >> rows;
    char ch='A';

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
    return 0;
=======
#include <iostream>
using namespace std;
//Alphabet Square Pattern ..................
int main()
{
    int rows;

    cout << "Enter your numbers of rows:";
    cin >> rows;
    char ch='A';

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
    return 0;
>>>>>>> 2e2204d3d1b8e2cd48b5e8dca667a9e05ed6f533
}