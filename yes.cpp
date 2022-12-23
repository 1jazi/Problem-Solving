#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{

  int num;
  cin >> num;

  char array[num];
  char yes[] = "yes";
  for (int i = 0; i <= num; i++)
  {
    cin >> array[i];

    tolower(array[i]);
    string s = array;
    if (s == "yes" || s == "YES")
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }

  return 0;
}
