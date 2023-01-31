#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w1,w2,w3,s;
        cin>>w1>>w2>>w3>>s;
        if((w1+w2+w3)<=s)
        {
            cout<<1;
        }
        else
        {
            if((w1+w2)<=s||(w2+w3)<=s)
            {
                cout<<2;
            }
            else
            {
                cout<<3;
            }
        }
    }
    return 0;
}
