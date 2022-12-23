#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t, n, array[100];
    cin >> t;
    while (t--)
    {
        cin >> n;
        n *= 2;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            int values;
            cin >> array[i];

            array[i] = values;
            v.push_back(values);
            cout << array[i] << " ";
            continue;
        }

        for (auto i = 0; i < v.size(); i++)
        {
            v.push_back(array[i]);
            if (v[i] == v[i + 1])
            {
                v[i] = 0;
            }
        }
        cout << "\n";
    }
    for (auto &i : array)
    {
        cout << i << " ";
    }
    for (int i = 0; i < n; i++)
    {

        cout << array[i] << " ";
    }

    return 0;
}