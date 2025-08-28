#include <stdio.h>
int main()
{
    char ch;
    printf("enter a charachter");
    scanf("%c", &ch);
    if ((ch >= 'A') && (ch <= 'Z'))

    {
        ch = +32;
        printf("%c", ch);
    }
    if ((ch >= 'a') && (ch <= 'z'))
    {
        ch = -32;
        printf("%c", ch);
    }

    return 0;
}