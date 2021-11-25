#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,n,j,temp;
    cout<<"enter the limit of array:";
    cin>>n;
    cout<<"array element:";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];

    }
    temp=arr[0];
    for(j=1; j<n; j++)
    {
        if(temp<arr[j])
            temp=arr[j];
    }
    cout<<"greatest element:"<<temp;
    return 0;
}
