<<<<<<< HEAD
#include <iostream>
using  namespace std;
int main(){
    int i,j;
    int rows;
    cout<< "enter your rows:";
    cin >> rows;
    char ch='A';
    for ( i = 0; i < rows; i++){
        for(j = 0; j < i+1; j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    return 0;
=======
#include <iostream>
using  namespace std;
int main(){
    int i,j;
    int rows;
    cout<< "enter your rows:";
    cin >> rows;
    char ch='A';
    for ( i = 0; i < rows; i++){
        for(j = 0; j < i+1; j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    return 0;
>>>>>>> 2e2204d3d1b8e2cd48b5e8dca667a9e05ed6f533
}