#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, nn;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> v;
        for (int i = n; i > 0; i--)
        {
            v.push_back(i);
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i] == i + 1)
            {
                swap(v[i], v[i + 1]);
            }
        }
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}