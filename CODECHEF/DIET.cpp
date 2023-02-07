#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int prt=0,flag=0;
        for(int i=0;i<n;i++){
            prt=prt+a[i]-k;
            if(prt<0){
                cout<<"NO "<<i+1<<endl;
                flag=1;
                break;
            }
        }
        if(flag!=1){
            cout<<"YES"<<endl;
        }
    }
}