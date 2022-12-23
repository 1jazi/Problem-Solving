#include <iostream>
using namespace std;
void compare(string str);
int main()
{

  int numOfTestCases;
  cin >> numOfTestCases;

  string s;
  while (numOfTestCases--)
  {

    int lengthOfString;
    cin >> lengthOfString;

    while (s.length() != lengthOfString)
    {
      cin >> s;
    }
  }
  compare(s);

  return 0;
}
void compare(string s)
{
  int count = 0;
  int total;
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
    if (count > 1 && s[i] != '0')
    {
      count++;
      // cout<<s[i]<<endl;
    }
    if (count > 1 && s[i] != '0')
    {

      total += count;
    }
    if (count <= 1 && s[i] == '0')
    {

      total += count;
    }
    if (total == 0)
    {
      total *= 2;
    }
  }

  cout << total << endl;
}
