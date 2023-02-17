#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,b;
        cin>>n>>b;
        int w,h,p,maxarea=0;
        cin>>w>>h>>p;
        if(p<=b){
            int area=w*h;
            if(maxarea<area){
                maxarea=area;
            }
        }
        
    }
    return 0;
}