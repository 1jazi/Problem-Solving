#include <iostream>
#include <algorithm>
using namespace std;
int minValue(int array[], int size);
int maxValue(int array[], int size);
int main()
{

   int num;
   cin >> num;

   int array[num];
   int count = 0;
   for (int i = 0; i < num; i++)
   {
      cin >> array[i];
      // cout<<array[i]<<endl;
   }
   sort(array, array + num);
   int min = minValue(array, num);
   int max = maxValue(array, num);
   // cout<<min<<endl;
   // cout<<max<<endl;
   for (int i = 0; i < num; i++)
   {
      // cout<<array[i]<<endl;
      if (array[i] > array[0] && array[i] < array[num - 1])
      {
         count++;
      }
   }
   for (int i = 0; i < num; i++)
   {
      if (array[i] > min && array[i] < max)
      {
         // count++;
      }
   }
   cout << count << endl;
   return 0;
}
int minValue(int array[], int size)
{

   int min;

   for (int i = 0; i < size; i++)
   {
      if (array[i] < min)
      {
         min = array[i];
      }
   }
   return min;
}
int maxValue(int array[], int size)
{

   int max;

   for (int i = 0; i < size; i++)
   {
      if (array[i] > max)
      {
         max = array[i];
      }
   }
   return max;
}
