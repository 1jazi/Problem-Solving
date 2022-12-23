#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    cin >> n;
    // string m1[1000] = {"I hate it", "I love it", "I hate it"};
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            cout << "I hate ";
        }
        else
        {
            cout << "I love ";
        }
        if (i != n - 1)
        {
            cout << "that ";
        }
        else
        {
            cout << "it ";
        }
    }
    return 0;
}