#include<iostream>
using namespace std;

int main()
{
    //int t;
    //cin>>t;
    //while(t--)
    //{
        int rank;
        cin>>rank;
        if(rank<=50 && rank>0)
        {
            cout<<"100"<<endl;
        }
        else if(rank>50 && rank<=100)
        {
            cout<<"50"<<endl;
        }
        else if(rank>100)
        cout<<"0"<<endl;
    //}
    return 0;
}