#include<iostream>
#include<string.h>


using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string word;
        getline(cin,word);
        int lengthWord = word.length(),consonants=0;
        for(int i=1; i<=lengthWord; i++)
        {
            if()
            {
                consonants++;
            }
            else
            {
                consonants = 0;
            }
        }
        if(consonants>4)
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    return 0;
}