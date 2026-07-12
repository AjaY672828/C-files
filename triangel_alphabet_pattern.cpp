#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int rows;
    cout <<"Enter your rows";
    cin>> rows;
    for (i = 0; i < rows; i++){
        char ch='A'; 
        for (j = 0; j < i+1; j++)
        {
            cout << ch;
            ch=ch+1;
        }
        cout << endl;
    }
    return 0;
}