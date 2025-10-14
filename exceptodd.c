#include <stdio.h>
int main()
{
    int i, num, dig, x;
    for (i = 1; i <= 100; i++)
    {
        if (i > 9)
        {
            x = i;
            dig = x % 10;
            x = x / 10;
            num = x * dig;
            if (num % 2 == 0)
            {
                printf("%d ", num);
            }
        }
    }
}
