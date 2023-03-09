#include <bits/stdc++.h>
using namespace std;

int sum(int a[], int start, int end)
{
    int sum = 0;
    for (int i = start; i < end+1 ; i++)
    {
        sum += a[i];
    }
    return sum;
}

int product(int a[], int start, int end)
{
    int product = 1;
    for (int i = start; i < end+1 ; i++)
    {
        product *= a[i];
    }
    return product;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int a[n];
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int count = n;
        for (int i = 0; i<n; i++)
        {
            for (int j = i+1; j<n; j++)
            {
                if (sum(a, i, j) == product(a, i, j))
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
}