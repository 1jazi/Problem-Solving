#include <bits/stdc++.h>
using namespace std;
int main()
{

  int numOfTests, length, i, count, ans, counter = 1, j;
  string s, copyS;
  cin >> numOfTests;

  while (numOfTests--)
  {
    cin >> length;

    while (s.length() != length)
    {
      cin >> s;
      copyS = s;
      int mid = s.length() / 2;
      /*for(i =0;i<mid;i++){
         if(s.at(i)!=s.at(i)){
          count++;
      }

      }*/
      for (int i = 0; i < s.length(); i++)
      {
        count = 1;

        for (j = 1 + i; j < s.length(); j++)
        {
          if (s[i] == s[j] && s[i] != ' ')
          {
            count++;

            // s[i] = '0';
            s[j] = '0';
          }
          else if (s.at(i) != s.at(j))
          {
            // s[j]= '0';
          }
        }
        if (count > 1 && s[i] != '0')
        {
          // count++;
          // cout<<s[i]<<" -> "<<count<<endl;
        }
        if (count >= 1 && s[i] == '0')
        {
          counter++;
        }
        for (i = 0; i < s.length(); i++)
        {

          if (s[i] != copyS[i])
          {
            // counter++;
          }
        }
        if (copyS != s && count > 1)
        {
          ans = (copyS.length() * 2) - counter;
        }
        else if (copyS == s)
        {
          ans = copyS.length() * 2;
        }
        // else(s[i]!='0'){

        // }
      }
      cout << s << " -> " << ans << endl;
    }

    // cout<<s<<"  "<<counter<<endl;
  }

  return 0;
}
