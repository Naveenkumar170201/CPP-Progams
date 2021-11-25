#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
int isValid(int count2,string ip2)
{
    int initial=0;
    if(!(ip2.length()<=15)){
        return 0;
    }
    else{
        if(ip2[0]=='0')
            return 0;
        else
        {
            for(int i=0; i<ip2.length(); i++)
            {
                if(ip2[i]=='.')
                {
                    string separate=ip2.substr(initial,i);
                    initial=i+1;
                    int strToint=stoi(separate);
                    if(0<=strToint && strToint<=255)
                        count2+=1;
                }
            }
        }
        string separate=ip2.substr(initial,ip2.length());
        int strToint=stoi(separate);
        if(0<=strToint && strToint<=255)
            count2+=1;
        return count2;
    }

    return 0;
}
int getInput(int count1,string ip1)
{
    cout<<"Enter the ip address:";
    getline(cin,ip1);
    return isValid(count1,ip1);

}

int main()
{

    int count=0;
    string ip;
    int result=getInput(count,ip);
    if(result==4)
        cout<<"valid ip address";
    else
        cout<<"not valid ip address";

    return 0;
}
