#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, num, digit, rev = 0;

    cout << "Enter a positive number: ";
    cin >> num;

    n = num;

    do
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    } while (num != 0);

    cout << " The reverse of the number is: " << rev << endl;

    if (n == rev)
        cout << " The number is a palindrome.";
    else
        cout << " The number is not a palindrome.";

    /* vector<int> g1;
        int a = 0;
        while (cin >> a && isdigit(a))
        {
            cin >> a;
            g1.push_back(a);
        }
        for (auto &i : g1)
        {
            cout << i << endl;
        }
  */
    /*while (cin >> num && isdigit(num))
        {
            countInput++;
            for (int i = 0; i < countInput; i++)
            {
                int a = num;
                cout << num << endl;
            }

            // cout << num << endl;
            // numbers.push_back(num);
        }*/
    // vector<int> numbers;
    //  vector<int>::iterator i;
    // numbers.insert(478);
    /*numbers.push_back(808);
    numbers.push_back(3993);
    numbers.push_back(0);
    numbers.push_back(7675);*/
    // numbers.push_back(987789);
    // cout << numbers.empty() << endl;
    // for (int i : numbers)
    //{
    /*vector<int> numbers;
    vector<int>::iterator i;
    int num = 0;
    while (cin >> num && isdigit(num))
    {
        numbers.push_back(num);

        for (i = numbers.begin(); i != numbers.end(); ++i)
        {
            cout << *i << '\n';
        }
    }*/
    return 0;
}
