#include <bits/stdc++.h>
using namespace std;
int main()
{
  int numOfTest;
  cin >> numOfTest;

  while (numOfTest--)
  {

    int num;
    cin >> num;
    map<char, int> ma;
    for (int i = 0; i < num; i++)
    {
      char ch;
      cin >> ch;
      ma[i]++;
      // cout<<ma[i]<<endl;
    }

    int solution = 0;
    for (auto &i : ma)
    {
      int num1 = (i.second - 1);
      int num2 = 2;
      solution += num1 + num2;
    }
    cout << solution << endl;
  }
  return 0;
}
