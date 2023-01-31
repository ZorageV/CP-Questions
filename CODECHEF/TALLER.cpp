#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h1,h2; //height of first person = h1 and height of second person = h2
        cin>>h1>>h2;
        if(h1>h2)
        {
            cout<<"A"<<endl;
        }
        else cout<<"B"<<endl;
    }
    return 0;
}