#include<iostream>
using namespace std;
int main()
{
    int a[100],i,n,s;
    cout<<"enter the array limit:";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"array element:";
        cin>>a[i];
    }
    cout<<"enter search element:";
    cin>>s;
    for(i=0; i<n; i++)
    {
        if(a[i]==s){
            cout<<"element found ";//@ using position
            return 0;
        }
    }
    cout<<"element not found";
    return 0;
}
