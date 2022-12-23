#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int n, total = 0;
  cin >> n;

  // n = -1 + 2 - 3 + (pow(-1,n)*n;
  for (int i = 0; i < n; i++)
  {
    n = pow(i++, n) * n;

    cout << n << endl;
  }
  return 0;
}
