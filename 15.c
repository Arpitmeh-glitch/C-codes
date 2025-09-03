#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character :");
    scanf("%c", &ch);
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        printf("Uppercase alphabet");
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
        printf("Lowercase alphabet");
    }
    else if ((ch >= '1') && (ch <= '9'))
    {
        printf("Digit");
    }
    else
    {
        printf("Its a special charcter ");
    }

    return 0;
}