#include <stdio.h>
int main()
{
    int i, j, c, count = 0, arr[5];
    printf("enter 5 numbers\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (j = 0; j < 5; j++)
    {
        for (c = j + 1; c < 5; c++)
        {
            if (arr[j] != arr[c])
            {
                printf("Unique no = %d", arr[j]);
            }
        }
    }
}