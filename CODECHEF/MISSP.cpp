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
        int types[n],nopair=0;
        for(int i=0;i<n;i++)
        {
            cin>>types[i];
            nopair ^= types[i];
        }
        cout<<nopair<<endl;
    }
    return 0;
}