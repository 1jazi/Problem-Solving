#include <iostream>
using namespace std;
__int64 n, x, d, count = 0;
char c;
int main()
{

    cin >> n >> x;

    for (int i = 0; i < n; i++)
    {
        cin >> c >> d;
        if (c == '+')
        {
            x += d;
        }
        else if (d <= x)
        {
            x -= d;
        }
        else
        {
            count++;
        }
    }
    cout << x << " " << count;
}
