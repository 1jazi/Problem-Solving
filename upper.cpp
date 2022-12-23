// Program to check if a character is in
// uppercase using isupper()
/*#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    char x;
    cin >> x;
    if (isupper(x))
        cout << "Uppercase";
    else
        cout << "Not uppercase.";
    return 0;
}
*/
#include <bits/stdc++.h>

using namespace std;
string test(std::string text)
{
    for (int i = 1; i < text.size(); i++)
    {
        if (std::isupper(text[0]) != std::isupper(text[i]))
        {
            return "False";
        }
    }
    return "True";
}

int main()
{
    // string text = "ABCDEF";
    //  string text ="abcdef";
    string text = "ABcDef";
    cout << "Original string: " << text;
    cout << "\n\nCheck whether the said string is uppercase or lowercase: ";
    cout << test(text) << endl;
}