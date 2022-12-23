#include <bits/stdc++.h>
using namespace std;
int main()
{

    /*int n, countA = 0, countD;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char c[n];
        cin >> c[i];

        for (int j = i + 1; j < n; j++)
        {
            if (c[i] == 'A')
            {
                countA++;
            }
            else if (c[i] == 'D')
            {
                countD++;
            }
        }
        if (countA > countD)
        {
            cout << "Anton" << endl;
            break;
        }
        else if (countA < countD)
        {
            cout << "Danik" << endl;
            break;
        }
        else
        {
            cout << "Friendship" << endl;
            break;
        }
    }
    // cout << countA << " " << countD << endl;
return 0;*/
    int n, i, a, d;
    char ch;

    while (cin >> n)
    {
        a = 0;
        d = 0;

        for (i = 1; i <= n; i++)
        {
            cin >> ch;

            if (ch == 'A')
                a++;
            else
                d++;
        }

        if (a > d)
            cout << "Anton" << endl;
        else if (d > a)
            cout << "Danik" << endl;
        else
            cout << "Friendship" << endl;
    }
}
