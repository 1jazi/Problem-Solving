#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;

    cin >> m >> n;

    if (m == n)
    {
        cout << m * 10 << " " << n * 10 + 1 << endl;
    }
    else if (m < n && n - m == 1)
    {

        cout << m << " " << n << endl;
    }
    else if (m > n && n * 10 - m == 1)
    {

        cout << m << " " << n * 10 << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}