#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int testCase;
  cin >> testCase;
  while (testCase--)
  {

    int arraySize;
    cin >> arraySize;
    int arr[arraySize];
    for (int i = 0; i < arraySize; i++)
    {
      cin >> arr[i];
    }
    sort(arr, arr + arraySize);
    int count = arraySize;
    for (int i = 0; i < arraySize - 1; i++)
    {
      if (arr[i] == arr[i + 1] || arr[i + 1] - arr[i] == 1)
      {
        count--;
      }
    }
    if (count != 1)
    {
      cout << "NO" << endl;
    }
    else
    {
      cout << "YES" << endl;
    }
  }
}
