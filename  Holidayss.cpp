#include <bits/stdc++.h>
using namespace std;
int main()
{

    int i, n, m, r, mn, mx;
    while (cin >> n)
    {
        r = n % 7;
        m = n / 7;
        mx = mn = m * 2;
        if (r == 6)
        {
            mn++;
        }
        if (r <= 2)
        {
            mx += r;
        }
        else
            mx += 2;
        cout << mn << " " << mx << endl;
        break;
    }
    /* int n, max, min, count = 0;
     cin >> n;
     if (n > 5)
     {
         while (true)
         {

             n -= 5;
             count++;
             if (n < 5)

                 break;
         }
         min = n;
         max = n;
     }
     else
     {
         min = 0;
         max = n;
     }
     cout << min << " " << max << endl;*/
    return 0;
}