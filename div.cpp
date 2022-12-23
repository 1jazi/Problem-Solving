#include <iostream>
using namespace std;
int main()
{

  int test;
  cin >> test;

  while (test--)
  {
    int count = 1;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
      int c = 1;
      while (s[i] == s[i + 1] && i + 1 < s.size())
      {
        c++;
        i++;
      }
      if (c < 2)
      {
        count = 0;
        break;
      }
    }
    if (count == 1)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }

  return 0;
}
