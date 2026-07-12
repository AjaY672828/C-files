<<<<<<< HEAD
#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter your rows:";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
=======
#include <iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        int m=5;
        for(int j=1;j<=m;j++){
            cout<<"*";
        }
        cout<<endl;
    }
>>>>>>> 2e2204d3d1b8e2cd48b5e8dca667a9e05ed6f533
}