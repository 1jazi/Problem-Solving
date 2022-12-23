#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 0;
    switch (x)
    {
    case 1:
        cout << "o";
    case 0:
        cout << "z";
    case 2:
        cout << "h";
    }

    int n, a[1000], h[1000], count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> h[i];
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {

            if (a[i] == h[j])
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}