#include <stdio.h>
int main()
{
    int a, sum = 0;
    for (a = 1; a <= 7; a++)
    {
        sum = sum + 1 / a;
    }
    printf("%d", sum);

    return 0;
}