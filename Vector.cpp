#include <iostream>
#include <vector>
using namespace std;
int main()
{

  vector<int> v = {1, 2, 3};

  v.push_back(1);
  v.insert(v.begin(), 10);

  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }

  cout << "\n";

  return 0;
}
