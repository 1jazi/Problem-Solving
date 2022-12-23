#include <bits/stdc++.h>
using namespace std;
bool valid(int x);
int main()
{
    int n, array[100];
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        v.push_back(array[i]);
    }
    sort(v.begin(), v.end());
    int l = 0, r = n, ans = n, mid;
    int i = 0;
    while (l < r)
    {
        mid = l + (r - l) / 2;
        }
    i++;
    return 0;
}