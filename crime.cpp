#include <iostream>
#include <vector>
using namespace std;

int main()
{

  int n, m;
  cin >> n;
  cin >> m;
  vector<string> vec;
  string s[n][m];

  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < m; j++)
    {
      cin >> s[i][j];
      cout << s[0][j] << endl;
      if (s[0][j] == "*")
      {
        vec.push_back(s[i][j]);
      }
    }
  }

  for (auto i : vec)
  {
    cout << i << endl;
  }

  return 0;
}
