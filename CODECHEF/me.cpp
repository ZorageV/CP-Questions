#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int m1 = a[0];
        int m2 = a[1];
        if(m1==a[n-2] || m1==a[n-1])
        {
            for(int i=0;i<n-1;i++)
            {
                a[i]=m1;
            }
            cout<<"YES"<<endl;
        }
        else if(m2==a[n-1])
        {
            for(int i=0;i<n;i++)
            {
                a[i]==m2;
            }
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}