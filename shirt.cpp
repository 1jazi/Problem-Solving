#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        string a, b;
        cin >> a >> b;

        for (int i = 0; i < a.size(); i++)
        {
            for (int i = 0; i < b.size(); i++)
            {
                if (a.size() > b.size())
                {
                    cout << ">" << endl;
                    break;
                }
                else if (a.size() < b.size())
                {
                    cout << "<" << endl;
                    break;
                }
            }
        }
    }

    return 0;
}