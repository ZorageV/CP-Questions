#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,flag=0;
        cin>>l;
        string r;
        cin>>r;
        for(int i=0;i<l;i++)
        {
            if(r[i]=='H')
            {
                if(flag==1)
                {
                    flag =-1;
                }
                else
                {
                    flag++;
                }
            }
            else if((flag>0) && (r[i]=='T'))
            {
                flag--;
            }
        }
        if(flag==0)
        {
            cout<<"Valid"<<endl;
        }
        else
        {
            cout<<"Invalid"<<endl;
        }
    }
    return 0;
}