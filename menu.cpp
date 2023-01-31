#include<iostream>
using namespace std; 

float square(float side);
float circle(float radius);
float rectangle(float length, float breadth);

int main()
{
    cout<<"Enter operation number:"<<endl;
    cout<<"1. Circle\n2. Square\n3. Rectangle"<<endl;
    int n;
    cin>>n;
    switch (n)
    {
    case 1:
        float radius;
        cout<<"enter radius:";
        cin>>radius;
        cout<<circle(radius)<<endl;
        break;
    case 2:
        float side;
        cout<<"enter side";
        cin>>side;
        cout<<square(side)<<endl;
        break;
    case 3:
        float length,breadth;
        cout<<"enter length & breadth";
        cin>>length>>breadth;
        cout<<rectangle(length,breadth)<<endl;
        break;
    default:
        break;
    }
}
float circle(float radius)
{
    float pi = 3.14;
    float area = radius*radius*pi;
    return area;
}

float square (float side)
{
    float area = side*side;
    return area;
}

float rectangle(float length, float breadth)
{
    float area = length*breadth;
    return area;
}