#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l;
        cin >> l;
        int array[l];

        for (int i = 0; i < l; i++)
        {
            cin >> array[i];
        }
        for (int i = 0; i < l; i++)
        {
            int j;
            for (j = 0; j < l; j++)
            {
                if (array[i] == array[j] && i != j)
                    break;
            }
            if (j == l)
            {
                cout << i + 1 << endl;
            }
        }
    }

    return 0;
}