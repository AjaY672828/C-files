#include <iostream>
using namespace std;
// This program takes a numerical score as input and outputs the corresponding grade based on predefined ranges. The grading system is as follows:
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num >= 90 && num <= 100)
    {
        cout << "grade A1" << endl;
    }
    else if (num >= 80 && num < 90)
    {
        cout << "grade A" << endl;
    }
    else if (num >= 70 && num < 80)
    {
        cout << "grade B" << endl;
    }
    else if (num >= 60 && num < 70)
    {
        cout << "grade C" << endl;
    }
    else if (num >= 50 && num < 60)
    {
        cout << "grade D" << endl;
    }
    else if (num >= 40 && num < 50)
    {
        cout << "grade E" << endl;
    }
    else if (num >= 0 && num < 40)
    {
        cout << "grade F" << endl;
    }
    else if (num < 33)
    {
        cout << "Fail" << endl;
    }
    return 0;
}
