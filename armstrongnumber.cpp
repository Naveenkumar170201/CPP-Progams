#include<iostream>
using namespace std;
int main(){
    int n,i,r,temp,sum=0;
    cout<<"enter the 3 digit number:";
    cin>>n;
    temp=n;
    while(n>0){
        r=n%10;
        sum=sum+(r*r*r);
        n/=10;
    }
    if(temp==sum)
        cout<<temp<<"is armstrong number";
    else
        cout<<temp<<"not a armstrong number";
    return 0;
}
