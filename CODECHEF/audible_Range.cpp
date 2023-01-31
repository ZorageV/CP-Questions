#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int hertz;
        cin>>hertz;
        if(hertz>=67 && hertz<=45000)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }    
    return 0;
}