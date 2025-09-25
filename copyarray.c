#include <stdio.h>
int main()
{
    int arr1[5], arr2[5], i;
    printf("enter 5 numbers\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr1[i]);
        arr2[i] = arr1[i];
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}