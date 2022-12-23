#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<map<long long, string>> v(5);
    vector<set<long long>> s(5);

    long long b;
    cin >> b;

    for (int i = 0; i < 5; i++)
    {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            string name;
            long long salary;
            cin >> name >> salary;
            if (v[i].find(salary) == v[i].end() || name < v[i][salary])
                v[i][salary] = name;
            s[i].insert(salary);
        }
    }

    long long sum = 0, mx = 0;

    set<pair<long long, string>> ans;

    for (auto i : s[1])
    {
        for (auto j : s[2])
        {
            for (auto k : s[3])
            {
                for (auto l : s[4])
                {
                    sum = i + j + k + l;

                    long long x = b - sum;
                    if (x < 0)
                        continue;

                    auto last = s[0].upper_bound(x);
                    if (last == s[0].begin())
                        continue;

                    last--;

                    sum += *(last);

                    if (sum >= mx)
                    {
                        if (sum == mx)
                        {
                            if ((*ans.begin()).second == v[0][(*last)])
                                ;
                            continue;
                        }
                        mx = sum;
                        ans.clear();
                        ans.insert({1, v[1][i]});
                        ans.insert({2, v[2][j]});
                        ans.insert({3, v[3][k]});

                        ans.insert({4, v[4][l]});

                        ans.insert({0, v[0][(*last)]});
                    }
                }
            }
        }
    }
    for (auto i : ans)
        cout << i.second << endl;

    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}