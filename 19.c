#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three sides of triangle :");
    scanf("%d %d %d", &a, &b, &c);
    if ((a == b) && (b == c) && (c == a))
    {
        printf("Equilateral");
    }
    else if ((a == b) || (b == c) || (c == a))
    {
        printf("Isosecles");
    }
    else if ((a != b) && (b != c) && (c != a))
    {
        printf("Scalene");
    }
    else
    {
        printf("Enter vaild");
    }

    return 0;
}