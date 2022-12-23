#include <iostream>

using namespace std;

void sort(int array[], int size);
int main()
{

  int array[] = {8, 9, 4, 5, 6, 1, 3, 7, 2};
  // int size = sizeof(array)/sizeof(int);
  sort(array, 10);
  for (int element : array)
  {
    cout << element << " ";
  }
  cout << endl;

  return 0;
}
void sort(int array[], int size)
{
  int temp;
  for (int i = 0; i < size - 1; i++)
  {

    for (int j = 0; i < size - i - 1; j++)
    {
      if (array[j] > array[j + 1])
      {
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}
