// write a program to find the greatest number amoung four numbers using if else if ladder//
#include <stdio.h>
int main()
{
    int num1, num2, num3, num4;
    printf("enter 4 diffrent numbers ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    if ((num1 > num2) && (num1 > num3) && (num1 > num4))
    {
        printf("%d", num1);
    }
    else if ((num2 > num1) && (num2 > num3) && (num2 > num4))
    {
        printf("%d", num2);
    }
    else if ((num3 > num1) && (num3 > num2) && (num3 > num4))
    {
        printf("%d", num3);
    }
    else if ((num4 > num1) && (num4 > num3) && (num4 > num3))
    {
        printf("%d", num4);
    }

    return 0;
}