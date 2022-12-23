#include <iostream>
using namespace std;
class v
{
public:
    void cubes()
    {
        int numOfCubes, count = 0, total = 0, t = 0;
        cin >> numOfCubes;

        while (numOfCubes > 0)
        {
            t++;
            total = count + t;
            count = total;
            numOfCubes -= total;
            if (numOfCubes < 0)
            {
                t--;
                break;
            }
        }
        cout << t << endl;
    }
};
int main()
{
    v cub;
    cub.cubes();

    return 0;
}
