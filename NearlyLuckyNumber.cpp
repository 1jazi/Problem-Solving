#include <bits/stdc++.h>
using namespace std;
int main()
{
    /* string n;
     cin >> n;
     char l4 = 4, l7 = 7;
     int count = 0, cnt = 0;
     for (int i = 0; i < n.length(); i++)
     {
         if (n[i] == '4')
         {
             count++;
         }
         else if (n[i] == '7')
         {
             count++;
         }
     }
     cout << n.length() << "  " << count << endl;
     cnt = n.length() - count;
     if (count < n.length())
     {
         cout << "NO" << endl;
     }
     else if (count == n.length() && n != "7" && n != "4")
     {
         cout << "YES" << endl;
     }
     else if (n.length() == 1 && n == "7" || n == "4")
     {
         cout << "NO" << endl;
     }*/
    long long n;
    cin >> n;
    int count = 0;
    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            count++;
        }
        n /= 10;
    }
    if (count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}