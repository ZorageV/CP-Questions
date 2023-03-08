#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,b;
        cin>>n>>b;
        int w,h,p,maxarea=0;
        while (n--){
            cin>>w>>h>>p;
            if(p<=b){
                int area=w*h;
                if(maxarea<area){
                    maxarea=area;
                }
            }
        }
        if(maxarea==0){
            cout<<"no tablet"<<endl;
        }
        else{
            cout<<maxarea<<endl;
        }
    }
    return 0;
}