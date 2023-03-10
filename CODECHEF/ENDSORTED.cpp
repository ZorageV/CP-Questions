#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p[n];
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(p[i]<p[j]){
                    int temp;
                    temp=p[i];
                    p[i]=p[j];
                    p[j]=temp;
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}