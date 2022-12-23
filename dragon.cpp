#include <bits/stdc++.h>
using namespace std;
int main()
{

    int s, n, x, y;
    cin >> s >> n;
    map<int, int> m;
    for (int j = 0; j < n; j++)
    {
        cin >> x >> y;
        m.insert(pair<int, int>(x, y));
    }
    for (auto &i : m)
    {
        if (i.first < s)
        {
            s += i.second;
            cout << "YES" << endl;
            break;
            // continue;
        }
        else
        {
            cout << "NO";
        }
    }

    return 0;
}