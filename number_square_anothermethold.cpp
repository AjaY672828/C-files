#include <iostream>
using namespace std;
int main(){
    int i,j;
    int rows;
    int sum=1;
    cout << "Enter your rows:";
    cin >> rows;
    for(i=1;i<=rows;i++){
        for(j=1;j<=rows;j++){
            cout<<sum;
            sum++;
        }
        cout<<endl;
    }
    return 0;
}