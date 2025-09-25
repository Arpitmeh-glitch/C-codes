#include <stdio.h>
int main()
{
    int arr[100], n, i, even = 0, odd = 0;
    printf("enter the number of elements ");
    scanf("%d", &n);
    printf("enter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even += arr[i];
        }
        else
        {
            odd += arr[i];
        }
    }

    printf("sum of even no. = %d\n", even);
    printf("sum of odd no. = %d\n", odd);

    return 0;
}
