#include <bits/stdc++.h>
using namespace std;
bool palindrome(int arr[], int n)
{

    int flag = 0;

    for (int i = 0; i <= n / 2 && n != 0; i++)
    {

        if (arr[i] != arr[n - i - 1])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        return false;
    else
        return true;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, count = 0;
    cin >> n >> m;
    int row = pow(n, m);
    int array[row];

    //  for (size_t i = 0; i < row; i++)
    // {
    for (size_t j = 0; j < n; j++)
    {
        for (int k = 1; k <= m; k++)
        {
            // cout << array[k] << " ";
            //  int cuts = 0;
            // while (n % 2 == 0)
            // {
            array[k] = k;
            if (palindrome(array, m) == true)
            {
                count++;
                // cuts += 1;
            }
            n %= 2;
            // }
            //  }
        }
    }
    cout << count << endl;

    return 0;
}
