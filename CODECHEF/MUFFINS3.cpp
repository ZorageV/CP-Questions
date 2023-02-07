#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a=0;
        cin>>n;
        if((n%2)==0){
            a=n+1-int(n/2);
        }
        else{
            a=n-int(n/2);
        }
        cout<<a<<endl;
    }
    return 0;
}
