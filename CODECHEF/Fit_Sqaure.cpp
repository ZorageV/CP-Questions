#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        if(m%2==0)
        {
            cout<<(m/2)* n<<endl;
        }
        else if(n%2==0)
        {
            cout<<(n/2)*m<<endl;
        }
        else
        {
            cout<<(m*n)/2<<endl;
        }
    }
    return 0;
}
