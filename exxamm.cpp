#include <bits/stdc++.h>
using namespace std;
void copy(int &a, int &b, int &c)
{

    a *= 2;
    b *= 2;
    c *= 2;
}
int main()
{
    /*int array1[] = {1200, 200, 2300, 1230, 15437};
    int array2[] = {12, 14, 16, 18, 201};
    int temp, result = 0;
    for (temp = 0; temp < 3; temp++)
    {
        result += array1[temp];
    }

    for (temp = 0; temp < 5; temp++)
    {
        result += array2[temp];
    }
    cout << result;*/

    int ary[2][3] = {{1, 2, 3}, 
                    {4, 5, 6}};
    cout << ary[1][0];

    return 0;
}