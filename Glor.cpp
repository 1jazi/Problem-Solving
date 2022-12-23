#include <bits/stdc++.h>
using namespace std;
bool func(const pair<int, int> &Array1,
          const pair<int, int> &Array2)
{
    return (Array1.second < Array2.second);
}
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int fire[n];
        int ans[n];
        for (int i = 0; i < n; i++)
        {
            cin >> fire[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> ans[i];
        }
        vector<pair<int, int>> f;
        vector<pair<int, int>> s;
        for (int i = 0; i < n; i++)
        {
            if (fire[i] == 1)
                f.push_back({fire[i], ans[i]});
            else
                s.push_back({fire[i], ans[i]});
        }
        int size1 = f.size();
        int size2 = s.size();
        sort(f.begin(), f.end(), func);
        sort(s.begin(), s.end(), func);
        int i = size2 - 1;
        int j = size1 - 1;
        long long int ansSolve = 0;
        if (i == j)
        {
            while (i && j)
            {
                ansSolve = ansSolve + 2 * f[j--].second + 2 * s[i--].second;
            }
            if (s[0].second > f[0].second)
                ansSolve += 2 * s[0].second + f[0].second;
            else
                ansSolve += s[0].second + 2 * f[0].second;
            cout << ansSolve << endl;
        }
        else
        {
            while (i >= 0 && j >= 0)
            {
                ansSolve = ansSolve + 2 * f[j--].second + 2 * s[i--].second;
            }
            while (i >= 0)
            {
                ansSolve += s[i--].second;
            }
            while (j >= 0)
                ansSolve += f[j--].second;

            cout << ansSolve << endl;
        }
    }
}
// 0 fire
// 1 frost
int main()
{
    solve();
    return 0;
}
