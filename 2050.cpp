#include <iostream>
using namespace std;
int main()
{

    int t = 0;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (n % 2050 == 0)
        {
            long long x = n / 2050;
            long long sum = (long long)0;
            while (x != 0)
            {
                sum += (long long)x % 10;
                x /= 10;
            }
            cout << sum << "\n";
        }
        else
        {
            cout << "-1\n";
        }
    }

    return 0;
}
