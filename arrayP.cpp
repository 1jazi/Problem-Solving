#include <bits/stdc++.h>
using namespace std;
int main()
{

    int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int a[] = {2, 4, 6, 8};
    int *p;
    int *p0 = a;
    for (int i = 0; i < sizeof(array) / sizeof(int); i++)
    {
        p = &array[i];
        cout << *p << " -> " << p << endl;
    }
    cout << "--------------------------------------------------------------";
    cout << "\n"
         << *p << endl;
    cout << *p0 << endl;
    cout << *(p0 + 1) << endl;
    return 0;
}