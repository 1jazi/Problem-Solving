#include <bits/stdc++.h>
using namespace std;
int main()
{

    map<int, int> m;

    m.insert(pair<int, int>(1, 2));
    m.insert(pair<int, int>(3, 4));
    m.insert(pair<int, int>(5, 6));
    m.insert(pair<int, int>(7, 8));
    m.insert(pair<int, int>(9, 0));
    m[1] = 6;
    for (auto &i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}