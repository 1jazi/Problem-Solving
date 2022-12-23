#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, l[100], r[100];
    cin >> s;
    // cout << s.length() << " " << s.size() << endl;
    if (s.length() % 2 == 0)
    {
        for (int i = 0; i < s.length() / 2; i++)
        {

            l[i] = s[i];
        }
        for (int i = s.length() / 2; i < s.length(); i++)
        {
            r[i] = s[i];
        }
        for (int i = 0; i < s.length() / 2; i++)
        {

            // if()
        }
    }
    return 0;
}