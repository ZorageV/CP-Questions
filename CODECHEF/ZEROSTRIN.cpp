#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ones=0;
        int zeroes=0;
        int steps=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                ones++;
            }
            else if(s[i]=='0')
            {
                zeroes++;
            }
            //cout<<s[i]<<ones<<zeroes<<endl;
        }
        if(ones==n)
        {
            cout<<"1"<<endl;
        }
        else if(zeroes==n)
        {
            cout<<"0"<<endl;
        }
        else if(ones>zeroes)
        {
            for(int i=0; i<n; i++)
            {
                if(s[i]==1)
                {
                    s[i]=0;
                }
                else
                {
                    s[i]=1;
                }
            }
            steps++;
            steps = steps + zeroes;
            cout<<steps<<endl;
        }
        else
        {
            steps = steps + ones;
            cout<<steps<<endl;
        }
    }
    return 0;
}