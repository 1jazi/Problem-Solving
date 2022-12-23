#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        cout << s << endl;
        bool k = true;
        int n = s.length();
        for (int i = 1; i < n; i++)
        {

            cout << s[i] << " " << s[i - 1] << endl;
            if (s[i] - s[i - 1] != true)
            {
                k = false;
                break;
            }
            else
            {

                cout << s << endl;
            }
        }
        if (k == true)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}
