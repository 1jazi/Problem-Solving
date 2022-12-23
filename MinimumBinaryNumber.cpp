#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, z = 0, o = 0;
    cin >> l;
    string s;
    cin >> s;

    for (int i = 0; i < l; i++)
    {
        if (s[i] == '1')
        {
            o++;
        }
        else if (s[i] == '0')
        {
            z++;
        }
    }
    if (l == 1)
    {
        cout << s << endl;
    }
    else
    {
        cout << 1;
        while (z--)
        {
            cout << 0;
        }
        cout << endl;
    }

    return 0;
}
