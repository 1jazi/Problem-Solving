#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

  string s;
  cin >> s;
  vector<string> v;
  v.push_back(s);
  int count = 0;
  for (int i = 0; i < v.size(); i++)
  {
    if (b(v.begin(), v.end(), 4))
    {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}
