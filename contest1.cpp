#include <iostream>
#include <cmath>
#include <climits>
#include <algorithm>
using namespace std;
int main()
{
  /*string s = "0101";
  s[1] = min(s[0],s[1]);
  cout<<s[1]<<endl;
  s.erase(remove(s.begin(), s.end(), s[0]));
  cout<<s<<endl;*/
  int t, n, m;
  cin >> t;

  while (t--)
  {

    string a, b;
    cin >> n;
    cin >> m;

    cin >> a;

    cin >> b;

    if (a.length() >= 2)
    {
      a[1] = min(a[0], a[1]);

      a.erase(remove(a.begin(), a.end(), a[0]));

      a[1] = max(a[0], a[1]);
      a.erase(remove(a.begin(), a.end(), a[0]));
      if (a == b)
      {
        cout << "YES" << endl;
        // break;
      }
      else
      {
        cout << "NO" << endl;
      }
    }

    // cout<<a[2]<<" ";

    // a[1] = max(a[0],a[1]);
    // a.erase(remove(a.begin(), a.end(), a[0]));

    // a[1] = max(a[0],a[1]);
    // a.erase(remove(a.begin(), a.end(), a[0]));
  }
  //}

  // for(int i = 0;i<n;i++){

  //}

  // a[1] = max(a[0],a[1]);
  // a.erase(remove(a.begin(), a.end(), a[0]));

  return 0;
}
