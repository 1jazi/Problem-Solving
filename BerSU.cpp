#include <bits/stdc++.h>
using namespace std;
int main()
{

    int boy, girl;
    cin >> boy;
    vector<int> v1(boy);
    for (int i = 0; i < v1.size(); i++)
    {
        cin >> v1[i];
    }
    cin >> girl;
    vector<int> v2(girl);
    for (int i = 0; i < v2.size(); i++)
    {
        cin >> v2[i];
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    int i = 0, j = 0, ans = 0;

    while (i < boy && j < girl)
    {
        if (abs(v1[i] - v2[j]) < 2)
        {
            ans++;
            i++, 
            j++;
            continue;
        }
        if (v1[i] < v2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    cout << ans;
    return 0;
}