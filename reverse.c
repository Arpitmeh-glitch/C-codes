#include <stdio.h>
int main()
{
    int i, n;
    printf("enter the number of elements for the array");
    scanf("%d", &n);
    int arr1[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (i = n; i >= 0; i--)
    {

        printf("%d", arr1[i]);
    }
    return 0;
}