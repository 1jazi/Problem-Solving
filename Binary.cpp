#include <iostream>

using namespace std;
int binary(int *array, int element, int mid, int low, int high);
int main()
{

  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int element = 5;
  int low = 0;
  int high = sizeof(array) / sizeof(array[0]) - 1;

  int mid = low + (high - low) / 2;
  int index = binary(array, element, mid, low, high);
  cout << "the element at index : " << index << endl;

  return 0;
}
int binary(int *array, int element, int mid, int low, int high)
{

  int count = 1;
  while (low <= high)
  {
    mid = low + (high - low) / 2;

    cout << count << " - middle -> " << array[mid] << endl;

    if (element > array[mid])
    {
      low = mid + 1;
    }
    else if (element < array[mid])
    {
      high = mid - 1;
    }
    else if (element == array[mid])
    {
      return mid;
    }
    count++;
  }

  return -1;
}
