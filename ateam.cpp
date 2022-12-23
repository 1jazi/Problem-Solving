#include <iostream>
using namespace std;

int main()
{

  int num, p, v, t, count = 0, total = 0;
  cin >> num;

  while (num--)
  {
    cin >> p >> v >> t;
    if (p == 1 || v == 1 || t == 1)
    {
      count++;
    }
    if (count >= 2)
    {
      total++;
    }
  }
  cout << total << endl;

  return 0;
}
