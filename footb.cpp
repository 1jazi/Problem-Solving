#include <bits/stdc++.h>
using namespace std;

string s1;
int main()
{

    cin >> s1;
    int count = 1;
    for (int i = 1; i <= s1.length(); i++)
    {
        if (s1[i] == s1[i - 1])
        {
            count++;
            if (count == 7)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        else
        {
            count = 1;
        }
    }
    // cout << count << endl;
    cout << "NO" << endl;
    return 0;
}
