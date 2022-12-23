#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, countA = 0, countB = 0;
    cin >> a >> b;
    // map<int, int> m;
    int n = max(a, b);
    int m = min(a, b);
    //  m.insert(pair<int, int>(a, b));
    countB = (n - m) / 2;
    for (int i = 0; i < n; i++)
    {
        a--;
        b--;
        countA++;

        if (a == 0 || b == 0)
        {
            break;
        }
    }
    cout << countA << " " << countB << endl;
    return 0;
}