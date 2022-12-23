#include <bits/stdc++.h>
using namespace std;
bool test(string text);
int main()
{

    int t, count = 0;
    /* vector<char> v;
     v.push_back('jazi');*/

    cin >> t;
    while (t--)
    {
        int l;
        cin >> l;
        string s;
        cin >> s;
        char c = 'T';
        bool b = test(s), result = false;
        /*if (s.find(c) != string::npos)

        {

            count++;
            cout << s << endl;
        }*/
        for (auto &elem : s)
        {
            if (elem == c)
            {
                result = true;
                cout << "-------";
                break;
            }
        }
        if (result)
        {
            cout << "YES " << s << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
bool test(string text)
{
    for (int i = 1; i < text.size(); i++)
    {
        if (isupper(text[0]) != isupper(text[i]))
        {
            return false;
        }
    }
    return true;
}
