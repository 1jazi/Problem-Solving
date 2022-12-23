#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int numOfKey;
        cin >> numOfKey;
        int array[3];
        int first, second, third, count = 0;
        // cin >> first >> second >> third;
        /*vector<int> v;
        v.push_back(first);
        v.push_back(second);
        v.push_back(third);*/
        for (int i = 0; i < 3; i++)
        {
            cin >> array[i];
            for (int j = i; j < 3; j++)
            {
                /*if (v[j] < numOfKey)
                {
                    count++;
                }
                if (v[j] < numOfKey && v[v[j]] == 0)
                {
                    count--;
                }
                if (v[j] < numOfKey && v[j] == 0)
                {
                    count--;
                }*/
                if (array[j] != 0 && array[array[j]] != 0)
                {
                    // cout << "YES" << endl;
                    count++;
                }
                // }
                // cout << v[i] << " ";
            }
            if (count >= 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }

        return 0;
    }
}