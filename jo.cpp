#include <bits/stdc++.h>
using namespace std;

void solve(int x, int y, int z)
{
    int sqa = pow(x, 2);
    int sqb = pow(y, 2);
    int sqc = pow(z, 2);
    if ((x + y > z) && (x + z > y) && (y + z > x))
    {

        if (x == y && y == z)
        {
            cout << "equilateral ";
        }
        else if (x == y || y == z || z == x)
        {
            cout << "isosceles ";
        }
        else
        {
            cout << "scalene ";
        }
        if (sqa == sqb + sqc ||
            sqb == sqc + sqa || sqc == sqa + sqb)
        {
            cout << "right";
        }
        else if (sqa > sqc + sqb ||
                 sqb > sqa + sqc ||
                 sqc > sqa + sqb)
        {
            cout << "obtuse";
        }
        else
        {
            cout << "acute";
        }
    }
    else
    {
        cout << "Invalid";
    }
}

int main()
{

    double x, y, z;
    cin >> x >> y >> z;

    solve(abs(x), abs(y), abs(z));
}