#include <bits/stdc++.h>
using namespace std;

int main()
{

    int
        n,
        m, p, l, r, k;
    cin >> n >> m >> p;
    int sum = 0;
    vector<int> v(n);
    while (m--)
    {
        cin >> l >> r >> k;
        int num1 = l;
        int num2 = r;

        for (int i = num1; i <= num2; i++)
        {
            sum = sum + i;
        }
        // cout << sum;

        for (int i = 0; i < n; i++)
        {
            // k = (sum * i) % p;
            int ans = sum % p;
            v.push_back(ans);
        }
    }
    for (auto &i : v)
    {
        cout << i << " ";
    }
    return 0;
}
