#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        /* vector<int> v;
         for (int i = 0; i < 3; i++)
         {
             // int x;
             cin >> v[i];
             // v.push_back(x);
         }*/
        int x, y, z;
        cin >> x >> y >> z;
        // sort(v.begin(), v.end());
        if (x > y)
        {
            swap(x, y);
        }
        if (x > z)
        {
            swap(x, z);
        }
        if (y > z)
        {
            swap(y, z);
        }
        if (y == z)
        {
            // cout << endl;
            cout << "YES" << endl;
            cout << x << " " << x << " " << z << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}