#include <stdio.h>

int main()
{
    int i, arr[5];
    printf("Enter 5 elements\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = arr[0], max = arr[0];

    for (i = 1; i < 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Min value = %d Max value = %d", min, max);

    return 0;
}
