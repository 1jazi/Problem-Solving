#include <iostream>
#include <vector>
using namespace std;
int main()
{

  int test;
  cin >> test;

  while (test--)
  {

    int num;
    cin >> num;
    vector<int> vec;
    for (int i = 0; i < num; i++)
    {
      int v;
      cin >> v;
      vec.push_back(v);
    }
    for (int i = 0; i < num; i++)
    {
      int a;
      cin >> a;
      string s;
      cin >> s;

      for (int j = 0; j < a; j++)
      {
        if (s[j] == 'U')
        {
          // cout<<s[j]<<endl;
          if (vec[i] == 0)
          {
            vec[i] = 9;
          }
          else
          {
            vec[i] -= 1;
          }
        }
        if (s[j] == 'D')
        {
          vec[i] = (vec[i] + 1) % 10;
        }
      }
    }

    for (int ans : vec)
    {
      cout << ans << " ";
    }
    cout << endl;
  }

  return 0;
}
