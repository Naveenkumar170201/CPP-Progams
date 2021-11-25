#include<iostream>
using namespace std;
int main()
{
    int n,i,isPrime=true;
    cout<<"enter the number:";
    cin>>n;
    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            isPrime=false;
            break;

        }
    }
    if(isPrime)
        cout<<"prime nuumber";
    else
        cout<<"not an prime number";

    return 0;
}
