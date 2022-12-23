#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string timur = "Timur";
    sort(timur.begin(), timur.end());
    // cout << "-----------------" << timur << endl;
    while (t--)
    {
        int l;
        cin >> l;

        string s;
        cin >> s;
        sort(s.begin(), s.end());
        if (s == timur)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}