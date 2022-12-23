#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findMax(int array[], int length);
int main()
{

    int testCases, length, array[1000], count = 0, maxElement = -1;
    int countMax = 0;
    cin >> testCases;
    // vector<int> vec;
    while (testCases--)
    {
        cin >> length;
        for (int i = 0; i < length; i++)
        {
            cin >> array[i];

            maxElement = findMax(array, length);
        }
        cout << maxElement << endl;
    }

    return 0;
}
int findMax(int array[], int length)
{

    int maxElement, count = 0;
    int maxCount = 0;

    for (int i = 0; i < length; i++)
    {
        count = 1;
        for (int j = i + 1; j < length; j++)
        {
            if (array[j] == array[i])
            {
                count++;
                if (count > maxCount)
                {
                    maxElement = array[j];
                }
            }
        }
    }
    return maxElement;
}
