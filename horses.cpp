#include <iostream>
using namespace std;
int main()
{

   int array[4];
   int count = 0;

   for (int i = 0; i < 4; i++)
   {
      cin >> array[i];
   }
   int j = 0;
   for (j != 3; j++)
   {
      if (array[j] >= 1)
      {
         if (array[0] == array[1])
         {
            count++;
         }
         if (array[0] == array[2])
         {
            count++;
         }
         if (array[0] == array[3])
         {
            count++;
         }
         if (array[1] == array[2])
         {
            count++;
         }
         if (array[1] == array[3])
         {
            count++;
         }
         if (array[2] == array[3])
         {
            count++;
         }
         if (count > 3)
         {
            count -= 3;
         }
      }
   }
   cout << count << endl;
   return 0;
}
