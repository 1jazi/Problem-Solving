#include <bits/stdc++.h>
using namespace std;
bool isPrime(int m)
{

    if (m == 1 || m == 0)
    {
        return false;
    }

    for (int i = 2; i < m; i++)
    {
        if (m % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int array[15] = {
        2, 3, 5,
        7, 11, 13,
        17, 19, 23, 29,
        31, 37, 41,
        43, 47};
    bool con = false;
    int n, m;
    cin >> n >> m;
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(11);
    v.push_back(13);
    v.push_back(17);
    v.push_back(19);
    v.push_back(23);
    v.push_back(29);
    v.push_back(31);
    v.push_back(37);
    v.push_back(41);
    v.push_back(43);
    v.push_back(47);

    /* for (int i = 1; i <= 50; i++)
     {

         if (isPrime(i))
         {

             // array[i] = i;
         }
         //  cout << array[i] << " ";
     }*/
    int size = sizeof(array) / sizeof(int);
    // cout << " -> " << v.size();
    for (int i = 0; i < v.size(); i++)
    {
        if (n == v[i] && m == v[i + 1])
        {
            con = true;

            break;
        }
    }
    if (con == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}