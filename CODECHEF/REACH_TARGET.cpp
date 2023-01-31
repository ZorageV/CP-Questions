#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y; // x = target and y = no. of runs curently
        cin>>x>>y;
        cout<<x-y<<endl; 
    }
}