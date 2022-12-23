#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{

  srand(time(NULL));
  int x = rand() % 10;
  cout << x << endl;

  return 0;
}
