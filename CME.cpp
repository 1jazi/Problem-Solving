#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int temp = n;
        if (n == 2)
        {
            cout << 2 << endl;
        }
        else if (n % 2 == 0)
        {
            cout << 0 << endl;
        }
        else if (n % 2 != 0)
        {
            n = ceil((double)n / 2);
            //  cout << n << endl;
            // int ans = (temp - n) - 1;
            temp -= n;
            n -= temp;
            cout << n << endl;
        }
    }

    return 0;
}
