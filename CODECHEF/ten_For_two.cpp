#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s=0;
        cin>>n;
        while((n%10)!=0)
        {
            n=2*n;
            s++;
        }
        cout<<s<<endl;
    }
}
