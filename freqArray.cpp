#include <bits/stdc++.h>
using namespace std;
class freq
{
public:
};

int main()
{
    int n;
    cout << "Enter the size : " << endl;
    cin >> n;
    vector<int> v(10000);
    int frq[10000];
    cout << "Enter the Elements : " << endl;
    for (size_t i = 0; i < n; i++)
    {
        // int c;
        cin >> v[i];
        // v.push_back(c);
    }
    for (size_t i = 0; i < n; i++)
    {
        frq[v[i]]++;
    }

    cout << "enter the number u want to search it: " << endl;
    int num;
    cin >> num;
    cout << frq[num] << endl;
    return 0;
}