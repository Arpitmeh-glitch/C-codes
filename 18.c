#include <stdio.h>
int main()
{
    int percentage;
    printf("Enter your percentage :");
    scanf(" %d", &percentage);
    if (percentage >= 90)
    {
        printf("Grade A ");
    }
    else if (percentage >= 80)
    {
        printf("Grade B");
    }
    else if (percentage >= 70)
    {
        printf("Grade C");
    }
    else if (percentage >= 60)
    {
        printf("Grade D");
    }
    else if (percentage >= 55)
    {
        printf("Grade E");
    }

    else if (percentage >= 33)
    {
        printf("Grade F");
    }
    else if (percentage < 33)
    {
        printf("Grade Fail ");
    }
    return 0;
}