#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int weeks=0,coins=0;
        cin>>weeks>>coins;
        int total = weeks*coins;
        cout<<total<<endl;
    }
    return 0;
}