#include <bits/stdc++.h>
using namespace std;
string rec(string m, int n);
int factorial(int x);
int main()
{
    cout << factorial(5) << endl;
    cout << rec("jazi", 5) << endl;
    return 0;
}
string rec(string m, int n)
{

    if (n < 1)
        return "";
    cout << m << endl;
    return rec(m, n - 1);
}
int factorial(int x)
{
    if (x < 1)
    {
        return 1;
    }

    return x * factorial(x - 1);
}