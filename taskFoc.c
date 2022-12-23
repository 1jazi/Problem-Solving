#include <stdio.h>
#include <string.h>

int main()
{

    int t, countU = 0, mountain = 0, count = 0, n = 0;
    scanf("%d", &t);
    char c[t];

    for (int i = 0; i < t; i++)
    {
        scanf("%c", &c[i]);

        if (c[i] == 'D')
        {
            n -= 1;
            if (n <= -1 && c[i + 1] == 'U')
            {
                countU = 1;
            }
            else
            {
                n += 1;
                if (countU == 1 && n == 0)
                {
                    count++;
                    countU = 0;
                }
            }
            printf("%d", count);
        }
    }
    return 0;
}