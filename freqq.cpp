#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int arr[100000];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int freq[100001]{}; // In this way the array will be initialized to zeros.
                        // defining the array as a global array will make it initialized to zeros too
                        // memset(freq,0,sizeof freq); //another way to initialize the array to zeros

    for (int i = 0; i < n; i++)
        freq[arr[i]]++;

    // for (int i = 0; i < n; i++)
    cout << freq[2] << endl;
    return 0;
}