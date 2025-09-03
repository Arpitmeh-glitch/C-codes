#include <stdio.h>
int main()
{
    int num;
    printf("Enter any Number :");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf(" %d is  Even  ;", num);
        if (num == 0)
        {
            printf(" %d is neither odd or even ;", num);
        }
    }
    else
    {
        printf(" %d is  odd  ;", num);
    }

    return 0;
}