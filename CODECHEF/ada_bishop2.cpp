#include<iostream>
using namespace std;
void call1();
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,c;
        cin>>r>>c;
        if(r==1 && c==1)
        {
            cout<<15<<endl;
            call1();
        }
        else if(r==c)
        {
            cout<<16<<endl;
            cout<<"1 1"<<endl;
            call1();
        }
        else
        {
            cout<<17<<endl;
            cout<<(r+c)/2<<" "<<(r+c)/2<<endl;
            cout<<"1 1"<<endl;
            call1();
        }
    }
    return 0;
}
void call1()
{
    cout<<"8 8"<<endl;
    cout<<"7 7"<<endl;
    cout<<"6 8"<<endl;
    cout<<"1 3"<<endl;
    cout<<"3 1"<<endl;
    cout<<"8 6"<<endl;
    cout<<"7 5"<<endl;
    cout<<"4 8"<<endl;
    cout<<"1 5"<<endl;
    cout<<"5 1"<<endl;
    cout<<"8 4"<<endl;
    cout<<"7 3"<<endl;
    cout<<"2 8"<<endl;
    cout<<"1 7"<<endl;
    cout<<"7 1"<<endl;
    cout<<"8 2"<<endl;
}
