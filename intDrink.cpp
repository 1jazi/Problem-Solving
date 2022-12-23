#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> price(n);
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }
    int day;
    cin >> day;
    sort(price.begin(), price.end());
    for (int i = 0; i < day; i++)
    {
        int q, count = 0;
        cin >> q;
        // cout << q << " ";
        for (auto &j : price)
        {
            if (q >= j)
            {
                count++;
                // count = 0;
                // break;
            }
        }
        cout << count << endl;
    }

    return 0;
}