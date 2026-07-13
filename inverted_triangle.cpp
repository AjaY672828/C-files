#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int rows;
    cout << "Enter your rows:";
    cin >> rows;
    for (i = 0; i < rows; i++){  //this loop is changing a rows.......
        
        for(j=0; j<i; j++){        // this loop is changing a space for each rows........
        cout<<" ";
        }
            
        for(j=0; j<rows-i; j++){
            cout<<i+1;
        }
       cout<<endl;
    }
    return 0;
}
