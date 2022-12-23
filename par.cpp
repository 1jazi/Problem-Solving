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
        n *= 2;
        int array[n];
        // vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        for (auto &i : array)
        {
            cout << i << " ";
        }
    }
    return 0;
}