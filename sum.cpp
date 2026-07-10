#include <iostream>
using namespace std;
int main(){
    int n=50;
    int i=1;
    int sum=0;
    while(i<=n){
        sum=sum+i;
        i++;
        if(i==2){
            break;
        }
    }
    cout<<"Sum of n numbers is: "<<sum<<endl;
    return 0;
}   