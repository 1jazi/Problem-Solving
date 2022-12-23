#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, h[100], a[100], count = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> h[i] >> a[i];
    }

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (h[i] == a[j])
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}