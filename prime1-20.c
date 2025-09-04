#include <stdio.h>

int main()
{
    int i, j, pri;

    printf("Prime numbers from 1 to 20 are:\n");

    for (i = 2; i <= 20; i++)
    {
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                pri = 0;
            }
        }

        if (pri == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
