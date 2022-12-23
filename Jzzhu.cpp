#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    int n, m, last;
    double t, max = 0;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        // cout << ceil(t / m) << endl;
        if (ceil(t / m) >= max)
        {
            last = i;
            max = ceil(t / m);
            // cout << last << " ";
        }
    }

    cout << last + 1 << endl;
    return 0;
}