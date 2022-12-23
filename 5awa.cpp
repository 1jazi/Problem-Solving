#include <bits/stdc++.h>
using namespace std;
#define INF INT_MAX
long long cuts(long long n, int m)
{
    long long count = 0;
    int cuts = 1;
    int num = 0;
    for (size_t i = 1; i <= m; i++)
    {
        if (n % i == 0)
            num++;
    }
    if(){
        vector<int> v;
        v.puc
    }
    /* for (size_t i = m; i < n - 2; i++)
     {
         num++;
     }*/
    while (num)
    {
        count += pow(m, cuts);
        cuts++;
        num--;
    }
    return count;
}
long long solve(long long n, int m)
{
    if (n == 1)
        return 0;
    return cuts(n, m) % INT_MAX;
}
int main()
{
    long long n;
    int m;
    cin >> n >> m;
    cout << solve(n, m) << endl;

    return 0;
}
