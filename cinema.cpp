#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, count = 0, total = 0, sum = 0;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - 1; j++)
        {
            count++;
            total = array[j] - array[j + 1];
            // cout << total << endl;
            // cout << count << endl;
            if (array[j] > 25)
            {
                cout << "NO" << endl;
                return 0;
                ;
            }
            else if (array[j] < array[j + 1])
            {
                cout << "NO" << endl;
                return 0;
            }
            else if (array[j] == array[j + 1])
            {
                sum = array[j] + array[j + 1];
                // cout << sum << endl;
                if (sum >= array[j + 1])
                    cout << "YES" << endl;
                return 0;
            }
            else if (array[j] >= array[j + 1])
            {
                if (count == n)
                {
                    cout << "YES" << endl;
                    break;
                }
            }
        }
        /* if (total <= 0)
         {
             cout << "NO" << endl;
             break;
         }*/
    }
    return 0;
}