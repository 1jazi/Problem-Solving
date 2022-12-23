#include <bits/stdc++.h>
using namespace std;
bool palindrome(int arr[], int n)
{

    int flag = 0;

    for (int i = 0; i <= n / 2 && n != 0; i++)
    {

        if (arr[i] != arr[n - i - 1])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        return false;
    else
        return true;
}
int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int m, n;
        cin >> m;
        string s, r;

        for (int i = 0; i < m; i++)
        {
            cin >> s >> n >> r;
            if (s != m)
            {
            }
        }
    }

    return 0;
}
