#include <iostream>
#include <map>

using namespace std;
int main()
{

  int x, n, count = 0, total = 0;
  cin >> n >> x;

  map<char, int> m;
  int countPicks, countKids;
  for (int i = 0; i < n; i++)
  {
    char c;
    int d;

    cin >> c >> d;
    m.insert({c, d});
  }
  for (auto ele : m)
  {
    total = x + n;

    if (ele.first == '+')
    {
      total += ele.second;
      continue;
    }
    if (ele.first == '-')
    {
      total -= ele.second;
    }
  }
  cout << total << endl;

  // cout<<count<<endl;
  return 0;
}
