#include <bits/stdc++.h>
using namespace std;
long long n, ans;

int main()
{
    // cout << 1000000000000000 / 2 << endl;
    cin >> n;
    if (n % 2 == 0)
    {

        ans = n / 2;
        cout << ans << endl;
        return 0;
    }
    else
    {

        ans = -(n + 1) / 2;

        cout << ans << endl;
    }
    return 0;
}
/* for (int i = 1; i <= n; i++)
 {
     ans = pow(-1, i) * i;
     // cout << ans << " ";
     total += ans;
 }
 cout << total << endl;*/