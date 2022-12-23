#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, left = 0, right = n - 1, counter = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        int val = 0, count1 = 0, count2 = 0;
        while (left <= right)
        {
            if (v[left] > v[right])
            {
                val = v[left];
                i++;
            }
            if (v[left] < v[right])
            {
                val = v[right];
                i--;
            }
            if (i % 2 == 0)
            {
                count1 += val;
            }
            else
            {
                count2 += val;
            }
            i++;
        }
        cout << count1 << " " << count2;
    }
    return 0;
}