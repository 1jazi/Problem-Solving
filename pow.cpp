
#include <bits/stdc++.h>
using namespace std;
 
// Find the first digit
int LastTwoDigit(long long int num)
{
    
    int one = num % 10;
 
    num /= 10;
 
    int tens = num % 10;
 
    tens *= 10;
 
    num = tens + one;
 
    return num;
}
 
int main()
{
    int n;
    cin>> n;
    long long int num = 1;
 
    num = pow(5, n);
 
 
    cout << LastTwoDigit(num) << endl;
    return 0;
}
