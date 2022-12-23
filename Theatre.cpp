#include <bits/stdc++.h>
using namespace std;
long long n, m, a, tr;
int main()
{

    // int n, m, a, tr;
    cin >> n >> m >> a;
    // tr = (m / a) * (n / a);
    tr = ceil((double)m / a) * ceil((double)n / a);
    cout << tr << endl;

    return 0;
}