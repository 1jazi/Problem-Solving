#include <bits/stdc++.h>
using namespace std;
int main()
{

  long int a, b, test, sub = 0, count = 0, divided = 0, mod = 0;

  cin >> test;
  cout << 917 % 10 << endl;
  while (test--)
  {
    cin >> a;
    cin >> b;
    /*if(a==b){
     cout<<0<<endl;
    }*/
    if (a > b)
    {
      swap(a, b);
    }
    sub = b - a;
    divided = sub / 10;
    mod = sub % 10;
    count = divided;
    if (mod > 0)
    {
      count++;
    }
    cout << count << endl;
  }

  return 0;
}
