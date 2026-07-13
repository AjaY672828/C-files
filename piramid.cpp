#include <iostream>
using namespace std;
int main()
{
    int i, j, k, l;
    int n=8;
    for (i = 1; i <= n; i++) { // this is out loop find the how many types of line in output...
   
        for(j=1; j<= n - i; j++){  //this the show how many types of spaces in printed...
            cout<<" ";
        }

        for(k=1; k<=i; k++){  //first triangle numbers print this loop....
            cout<<k;
        }

        for(l=i-1; l>=1; l--){
            cout<<l;
        }
        cout<<endl;
    }
    return 0;
}