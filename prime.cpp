<<<<<<< HEAD
#include <iostream>
using namespace std;                      // Second method on find prime numberor not..............
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0;
    bool isprime = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isprime = false;
            break;
        }
    }
    if (isprime == true)
    {
        cout << "this is prime number." << endl;
    }
    else
    {
        cout << "this is not prime number." << endl;
    }
    return 0;
}
=======
#include <iostream>
using namespace std;                               //Second method on find prime numberor not..............
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int sum=0;
    bool isprime=true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            isprime=false;
            break;
        }
    }
    if(isprime==true){
        cout<<"this is prime number."<<endl;
    }else{
        cout<<"this is not prime number."<<endl;
        }
        return 0;
    }
>>>>>>> 2e2204d3d1b8e2cd48b5e8dca667a9e05ed6f533
