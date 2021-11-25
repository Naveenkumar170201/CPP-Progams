//two range in between prime numbers
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,i,j,count=0;
    cout<<"enter the n1 and n2 values:";
    cin>>n1;
    cin>>n2;
    for(i=n1; i<=n2; i++)
    {
        for(j=1; j<=n1/2; j++)
        {
            if(i%j==0)
                count++;
        }
        if(count==1)
        {
            cout<<i<<endl;
        }

        count=0;
    }

    return 0;
}
