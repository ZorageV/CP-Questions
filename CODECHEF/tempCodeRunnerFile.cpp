#include<iostream>
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
            double div=a/b;
            cout<<div<<endl;
        }
    return 0;
}