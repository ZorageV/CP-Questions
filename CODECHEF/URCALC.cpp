#include<iostream>
#include<iomanip>
using namespace std;

int main(){
        double a,b;
        char c;
        cin>>a>>b>>c;
        if(c=='+')
        {
            cout<<a+b<<endl;
        }
        else if(c=='-')
        {
            cout<<a-b<<endl;
        }
        else if(c=='*'){
            cout<<a*b<<endl;
        }
        else if(c=='/'){
            cout<<fixed<<setprecision(8)<<a/b<<endl;
        }
    return 0;
}