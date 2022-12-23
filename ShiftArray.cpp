#include <iostream>

using namespace std;
void shift(int array[], int index);
int main()
{

  int array[] = {1, 2, 3, 4, 5};

  shift(array, 1);

  for (int i = 0; i < sizeof(array) / sizeof(int); i++)
  {
    cout << array[i] << endl;
  }

  return 0;
}
void shift(int array[], int index)
{

  int temp = array[index];

  for (int i = index; i > 0; i--)
  {
    array[i] = array[i - 1];
  }
  array[0] = temp;
}
