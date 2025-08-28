#include <stdio.h>
int main()
{
    int a, sum = 0;
    printf("");
    scanf("%d", &a);
    for (a = 0; a <= 5000; a++)
    {
        sum = sum + a;
    }
    printf("%d", sum);
    return 0;
}