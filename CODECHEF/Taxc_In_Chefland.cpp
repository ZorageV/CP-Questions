#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int rup;
        cin>>rup;
        if(rup>100)
        {
            rup=rup-10;
        }
        cout<<rup<<endl;
    }
    return 0;
}