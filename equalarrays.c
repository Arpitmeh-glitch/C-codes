#include <stdio.h>
int main()
{
    int i, n, x, count = 0;
    printf("Enter the number you want to enter in both arrays");
    scanf("%d %d", &n, &x);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number :");
        scanf("%d", &a[i]);
    }
    int a[n], b[x];
    for (i = 0; i < x; i++)
    {
        printf("Enter for second array :");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("Arrays are equal");
    }
    else
    {
        printf("Not  an Equal arrays");
    }

    return 0;
}