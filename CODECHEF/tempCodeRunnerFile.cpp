#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin.ignore();
        getline(cin, s);
        int count=0;
        for(int i=0;i<n-1;i++){
            if(s[i]=='<'){
                if(s[i+1]=='>'){
                    count++;
                    i += 2;
                    continue;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}