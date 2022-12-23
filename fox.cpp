#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array[5];
    for (int i = 0; i < 5; i++)
    {
        // array[i] = 1;
        // array[1 - i] = 0;
        array[i] = 0;
        array[1 - i] = 1;
        cout << array[0];
    }

    char c[50];
    int n, m, count = 0;
    cin >> n;
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        // c[i] = '#';
        for (int j = 0; j < m; j++)
        {
            c[j + i + 1] = '.';
            // c[j + 1] = '.';
            //  c[i][j] = '#';

            cout << c[i];
        }
        cout << " " << endl;
        ;
    }
    return 0;
}