#include <bits/stdc++.h>
using namespace std;
int main()
{
    puts int n, k, a[2000], count = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < 5)
        {
            if (5 - a[i] >= k)
            {
                count++;
            }
        }
    }
    cout << count / 3;
}
