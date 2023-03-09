#include<bits/stdc++.h>
using namespace std;

int min_of_array(int a[], int n){
    int min= INT_MAX;
    for(int i=0; i<n; i++){
        if(a[i]<min){
        min=a[i];
        }
    }
    return min;
}
int hcf(int a[], int n){
    int hcf=1;
    int min=min_of_array(a, n);
    for(int i=2; i<=min; i++){
        int count=0;
        for(int j=0; j<n; j++){
            if(a[j]%i==0){
                count++;
            }
        }
        if(count==n){
            hcf=i;
        }
    }
    return hcf;
} 

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int ratio=hcf(a,n);
        for(int i=0;i<n;i++){
            a[i] /=ratio;
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}