#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

void even_odd(int num)
{
    if (num % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}

int main()
{
    int num1, num2, result;
    printf("first number: ");
    scanf("%d", &num1);

    printf("second number: ");
    scanf("%d", &num2);

    result = sum(num1, num2);
    printf("The sum of the numbers is: %d", result);
    even_odd(result);

    return 0;
}
