#include <iostream>
#include <vector>
using namespace std;
int main()
{

  int test;
  cin >> test;
  string s;

  while (test--)
  {
    int length;
    vector<char> vec;
    cin >> length;
    cin >> s;
    int rightCount = 0, leftCount = 0, count = 0;
    for (int i = 0; i < length; i++)
    {
      if (s[i] == '(' && s[i + 1] == ')')
      {
        i++;
        continue;
      }
      if (s[i] == '(')
      {
        leftCount++;
      }
      if (s[i] == ')')
      {
        rightCount++;
        if (leftCount < rightCount)
        {
          count++;
          rightCount--;
        }
      }
    }
    cout << count << endl;
  }

  return 0;
}
