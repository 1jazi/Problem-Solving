#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::ifstream myfile;
    myfile.open("test.txt");
    std::string myline;
    if (myfile.is_open())
    {
        while (myfile)
        {
            getline(myfile, myline);
            cout << myline << '\n';
        }
    }
    return 0;
}