#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int unit;
        float price;
        cin>>unit>>price;
        if(unit>100)
        {
            price = price*unit;
            price = 0.8*price;
        }
        else
        {
            price = price*unit;
        }
        printf("%.1f\n",price);
    }
    return 0;
}
