#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cin.ignore();
        string s;
        getline(cin, s);
        if (s.length() % 2 == 0)
        {
            for (int i = 0; i <= s.length(); i = i + 2)
            {
                int temp;
                temp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = temp;
            }
        }
        else
        {
            for (int i = 0; i < s.length() - 1; i = i + 2)
            {
                int temp;
                temp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = temp;
            }
        }
        for (int i = 0; i <= s.length(); i++)
        {
            s[i] = char(219 - int(s[i]));
        }
        cout << s << endl;
    }
    return 0;
}