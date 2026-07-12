<<<<<<< HEAD
#include <iostream>
using namespace std;
int main()  // i+1 ees liye liya kyu ke i+1 ye btata hai ke loop kitne baar chalega inner loop..
{
    int rows;
    cout << "Enter your rows:";
    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
=======
#include <iostream>
using namespace std;
int main()  // i+1 ees liye liya kyu ke i+1 ye btata hai ke loop kitne baar chalega inner loop..
{
    int rows;
    cout << "Enter your rows:";
    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
>>>>>>> 2e2204d3d1b8e2cd48b5e8dca667a9e05ed6f533
}