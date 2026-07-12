#include <iostream>
using namespace std;
int main(){
    int i, j;
    int rows;
    cout << "Enter your rows:";
    cin >> rows;
    for (i = 0; i < rows; i++) {
        int sum=1;
        for (j = 0; j < i + 1; j++) {
            cout<<sum;
            sum++;
        }
        cout<<endl;
    }
    return 0;
}