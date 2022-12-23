#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, array[100];

    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        int r = i % 2;
        if (r == 0)
        {
            array[i] = i;
            n -= array[i];
            /* if (n >= array[i] && array[i] >= 1)
             {
                 break;
             }*/
            // cout << n << endl;
            if (n == 0)
            {
                cout << "Mohmoud" << endl;
                break;
            }
            else
            {
                cout << "Ehab" << endl;
                break;
            }
            // break;*/
        }

        //  cout << x << endl;
        /* if (i % 2 == 0 && n >= i)
         {
             n -= i;
             cout << "Ehab" << n << endl;
             break;
         }
         else
         {
         }*/
    }
    /*for (int j = 0; j < n; j++)
    {
        if (j % 2 == 0 && n >= j)
        {
            n -= j;
        }
    }*/
    return 0;
}