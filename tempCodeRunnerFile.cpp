#include<iostream>
using namespace std;

void value();

int main()
{
    int i=5;
    while(i--)
    {
        value();
    }
    return 0;
}

void value()
{
    static int n=1;
    cout<<n<<endl;
    n++;
}