#include <iostream>
using namespace std;
int main()
{

  int array[8] = {0}, size = sizeof(array) / sizeof(array[0]);
  int page;
  cin >> page;

  for (int i = 1; i <= size - 1; i++)
  {
    cin >> array[i];
    array[i] += array[i - 1];
  }
  // page = (page-1)%array[7]+1;
  // cout<<page<<endl;
  for (int i = 1; i <= size - 1; i++)
  {
    // cout<<array[i]<<endl;
    // page-=array[i];
    if (array[i] >= page)
    {
      cout << i << endl;
      break;
    }
  }

  return 0;
}
