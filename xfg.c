#include <stdio.h>
int main()
{
    int num, check = 0, dig, x;

    printf("enter a number: ");
    scanf("%d", &num);

    x = num;

    do
    {
        dig = num % 10;
        check = (check * 10) + dig;
        num = num / 10;
    } while (num > 0);

    if (check == x)
        printf("%d is a palindrome", x);
    else
        printf("%d is not a palindrome", x);

    return 0;
}
