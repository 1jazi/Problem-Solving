#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(50);
    v.push_back(7);
    v.push_back(9);
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    return 0;
}