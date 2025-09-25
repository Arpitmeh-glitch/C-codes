#include <stdio.h>

int fac(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fac(n - 1);
}

int main()
{
    int number;
    printf("enter a positive integer= ");
    scanf("%d", &number);

    if (number < 0)
        printf(" Invalid input please input a valid number(+ve).\n");
    else
        printf("Factorial of %d is %d\n", number, fac(number));

    return 0;
}
