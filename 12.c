#include <stdio.h>
int main()
{
    int num;
    printf("Enter any Number :");
    scanf("%d", &num);
    if (num >= 0)
    {
        if (num == 0)
        {
            printf("Zero");
        }
        else
        {
            printf("Number is positive");
        }
    }

    else if (num < 0)
    {
        printf("Number is negative");
    }
    return 0;
}
