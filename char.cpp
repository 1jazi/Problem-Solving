#include <iostream>
using namespace std;
int main()
{

    int a = 100;
    int *p = &a;
    char *p1 = (char *)p;
    cout << "Address = " << p << endl;
    cout << "Char address = " << p1 << endl;
    return 0;
}
