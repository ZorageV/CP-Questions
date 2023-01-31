#include<iostream>
using namespace std;
int main()
{
    int t; 
    cin>>t;
    while(t--)
    {
        int water=0;
        cin>>water;
        if(water>=2000)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}