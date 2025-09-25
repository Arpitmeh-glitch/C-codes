#include <stdio.h>
int main()
{
    int n, i, j, count = 0, arr[5];
    printf("enter 5 munbers");
    for (n = 0; n < 5; n++)
    {
        scanf("%d", arr[n]);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
    }
    printf("%d", count);
}