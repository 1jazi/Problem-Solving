#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    vector<int> fire; // 0
    cin >> t;
    while (t--)
    {
        int storm[1000]; // 1
        int n, total = 0;
        cin >> n;
        fire.resize(n);
        // storm.resize(n);
        for (int i = 0; i < n; i++)
        {
            cin >> fire[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> storm[i];
        }
        for (int i = 0; i < n; i++)
        {

            if (fire[i] == fire[i + 1])
            {
                total += storm[i];
            }
        }
        cout << total << endl;
    }
    return 0;
}
