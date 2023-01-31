#include<iostream>

using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int t,sum=0;
        cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            sum = sum + n*n;
        }
        cout<<sum<<endl;
    }
    return 0;
}