#include <bits/stdc++.h>
using namespace std;
int compare(string s);
int main()
{

  string s;
  cin >> s;
  sort(s.begin(), s.end());
  int dup = compare(s);
  // cout<<dup<<endl;
  if (dup % 2 == 0)
  {
    cout << "IGNORE HIM!" << endl;
  }
  else
  {
    cout << "CHAT WITH HER!" << endl;
  }
  return 0;
}
int compare(string s)
{
  int count = 0;
  int l, len;
  for (int i = 0; i < s.length(); i++)
  {
    count = 1;

    for (int j = i + 1; j < s.length(); j++)
    {
      if (s[i] == s[j] && s[i] != ' ')
      {
        count++;

        s[j] = '0';
      }
    }
    if (count > 1 && s[i] == '0')
    {
      count++;
      // cout<<s[i]<<endl;
      len = s.length();
      len -= 1;
    }
    else
    {
      count++;
    }
    if (count > 1 && s[i] == '0')
    {
    }
  }
  l = len - count;
  return l;
}
