#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,a1,b1,a2,b2;
        cin>>a>>b>>a1>>b1>>a2>>b2;
        if(a1==a)
        {
            if(b1==b)
            {
                cout<<"1"<<endl;
            }
            else
            {
            cout<<"0"<<endl;
            }
        }
        else if(b1==a)
        {
            if(a1==b)
            {
                cout<<"1"<<endl;
            }
            else
            {
            cout<<"0"<<endl;
            }
        }
        
        else if(a2==a)
        {
            if(b2==b)
            {
                cout<<"2"<<endl;
            }
            else
            {
            cout<<"0"<<endl;
            }
        }
        else if(b2==a)
        {
            if(a2==b)
            {
                cout<<"2"<<endl;
            }
            else
            {
            cout<<"0"<<endl;
            }
        }
    }
    return 0;
}