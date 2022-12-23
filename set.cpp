#include <bits/stdc++.h>
using namespace std;
int main()
{

    set<int> s;
    set<int>::iterator it;
    set<int>::reverse_iterator itt;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(44);
    s.insert(5);
    s.insert(6);
    s.erase(1);

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }
    cout << "---------------------\n";
    for (auto itt = s.rbegin(); itt != s.rend(); itt++)
    {
        cout << *itt << endl;
    }

    return 0;
}