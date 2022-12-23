#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n = 5;
    int array[5] = {1, 1, 1, 1, 3};
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < n; j++)
        {
            if (array[i] == array[j] && i != j)
                break;
        }
        if (j == n)
        {
            cout << i + 1 << endl;
        }
    }

    // int ans = pow(5, n);
    cout << 25 << endl;

    return 0;
}
