#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    stack<int> st;

    for (auto i = 0; s.size(); i++)
    {
        if (s[i] == '(')
        {
            st.push(1);
            break;
        }
        st.pop();
    }

    return 0;
}