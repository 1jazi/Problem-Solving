#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, s;
    cin >> n;
    set<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        v.insert(s);
    }
    // sort(v.begin(), v.end());
    if (v.size() == 1)
    {
        cout << "NO" << endl;
        return 0;
    }
    int i = 0;
    for (auto x : v)
    {
        if (i == 1)
        {
            cout << x << endl;
            break;
        }
        i++;
    }
    return 0;
}