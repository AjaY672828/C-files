#include <iostream>
using namespace std;
int main(){                                                   //first method find a prime number.....
    int i;
    int n = 15;
    bool isPrime = true;
    for (i = 2; i <= n-1; i++)
    {
        if (n%i==0)
        {
            isPrime = false;
            break;
        }
    }
    if(isPrime==true){
        cout<< "This is a prime number." << endl;
    }
    else{
        cout<< "This is not a prime number." << endl;
    }
    return 0;
}