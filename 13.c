#include <stdio.h>
int main()
{
    int yr;
    printf("Enter a year:");
    scanf("%d", &yr);
    if (yr % 400 == 0)
    {
        printf(" Leap year ");
    }
    else if ((yr % 4 == 0) && (yr % 100 != 00))
    {
        printf(" Leap Year ");
    }
    else
    {
        printf("Not a Leap Year");
    }

    return 0;