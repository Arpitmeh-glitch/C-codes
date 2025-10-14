#include <stdio.h>
int main()
{
    int num, check, dig, x;
    printf("enter a number");
    scanf("%d", &num);
    x = num;
    do
    {
        if (num > 0)
        {
            dig = num % 10;
            num = num / 10;
            check = (num * 10) + dig;
        }
    } while (check == x);
    {
        printf(" is a palindrome", check);
    }
}