#include <bits/stdc++.h>
using namespace std;
bool sortingfunction(const pair<int, int> &Array1,
                     const pair<int, int> &Array2)
{
    return (Array1.second < Array2.second);
}
// 0 fire
// 1 frost
int main()
{
    int t;
    cin >> t;
    for (int z = 0; z < t; z++)
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
        for (int i = 0; i < n; i++) // 1 - f
        {
            if (fire[i] == 1)
                f.push_back({fire[i], ans[i]});
            else
                s.push_back({fire[i], ans[i]});
        }
        int size1 = f.size();
        int size2 = s.size();
        sort(f.begin(), f.end(), sortingfunction);
        sort(s.begin(), s.end(), sortingfunction);
        int i = size2 - 1;
        int j = size1 - 1;
        long long int solve = 0;
        if (i == j)
        {
            while (i && j)
            {
                solve = solve + 2 * f[j--].second + 2 * s[i--].second;
            }
            if (s[0].second > f[0].second)
                solve += 2 * s[0].second + f[0].second;
            else
                solve += f[0].second + 2 * f[0].second;
            cout << solve << endl;
        }
        else
        {
            while (i >= 0 && j >= 0)
            {
                solve = solve + 2 * f[j--].second + 2 * s[i--].second;
            }
            while (i >= 0)
            {
                solve += s[i--].second;
            }
            while (j >= 0)
                solve += f[j--].second;

            cout << solve << endl;
        }
    }
    return 0;
}
