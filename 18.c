// Q18: //Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
//.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/
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