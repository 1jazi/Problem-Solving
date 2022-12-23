#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, cnt1, cnt2, x;
        cin >> l;
        stack<int> v;
        stack<int> totalOdd;
        stack<int> totalEven;
        for (int i = 0; i < l; i++)
        {

            cin >> x;
            v.push(x);
        }
        while (!v.empty())
        {
            cnt1 += v.top();
            v.pop();
        }
        cout << cnt1 << endl;
        /*if (cnt1 % 2 == 0)
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }*/
    }
    return 0;
}
