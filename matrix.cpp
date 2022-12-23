#include <iostream>
#include <vector>
#include <map>
#include <array>
using namespace std;
int main()
{
   int testCases;
   cin >> testCases;
   while (testCases--)
   {
      int length;
      cin >> length;
      int maxElement = -1;
      // vector<int>vec;
      map<int, int> m;
      for (int i = 0; i < length; i++)
      {
         int a;
         cin >> a;
         m[a]++;
         // maxElement = m[a]>=3?maxElement=m[a]:maxElement;
         if (m[a] >= 3)
         {
            maxElement = a;
         }
      }
      cout << maxElement << endl;
   }

   return 0;
}
