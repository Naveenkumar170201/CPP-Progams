#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
class sentenceToword
{
public:
    string sentence,word;
    int initial;
    int getSentence()
    {
        cout<<"Enter the sentence:";
        getline(cin,sentence);
        //return sentence;
    }
    void words()
    {
        initial=0;
        for(int i=0; i<sentence.length(); i++)
        {

            if((sentence[i]==32)|| (sentence[i]==44))
            {
                for(int j=initial; j<i; j++)
                    word+=sentence[j];
                cout<<word<<endl;
                word.erase();
                initial=i+1;
            }
        }
        for(int i=initial; i<sentence.lenght(); i++)
            word+=sentence[i];
        cout<<word;
    }

};
int main()
{
    setenceToword s;
    s.getSentence();
    s.words();
    return 0;

}

