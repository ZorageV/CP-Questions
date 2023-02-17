#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int i=0;
        while(true){
            i++;
            a=a-i;
            if(a<0){
                cout<<"Bob"<<endl;
                break;
            }
            i++;
            b=b-i;
            if(b<0){
                cout<<"Limak"<<endl;
                break;
            }
        }
    }
    return 0;
}
