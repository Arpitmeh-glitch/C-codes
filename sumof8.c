#include <stdio.h>
int main()
{
    int num[8], i, sum = 0;
    printf("Enter 8 numbers ");
    for (i = 0; i < 8; i++)
    {
        scanf("%d\n", &num[i]);
        sum = sum + num[i];
    }
    printf("%d", sum);
    return 0;
}  