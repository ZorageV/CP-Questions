#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0;
        cin>>n;
        int a[2*n];
        for(int i=0;i<2*n;i++)
        {
            cin>>a[i];
        }
        int count=0;
        for(int i=0;i<2*n;i++)
        {
            count=0;
            for(int j=0;j<2*n;j++)
            {
                if(a[j]==a[i]){
                    count = count + 1;
                }
            }
            // cout<<count<<endl;
            if(count>2){
                flag=1;
            }
        }
        if(flag==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}