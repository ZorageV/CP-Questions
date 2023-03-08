#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int count=0;
        for(int i=0;i<n;i++){
            int count2=0;
            for(int j=0;j<n;j++){
                if(a[i]==a[j]){
                    count2++;
                }
            }
            if(count2>count){
                count=count2;
            }
        }
        cout<<n-count<<endl;
    }
    return 0;
}