#include <stdio.h>
int main()
{
    int n1 = 0, n2 = 1, n3, num;
    printf("enter a number that is to be checked for being prsent in the fibonaki series ");
    scanf("%d", &num);
    for (int i = 2; i <= 13; i++)
    {
        n3 = n1 + n2; //
        if (n3 == num)
        {
            printf("the number is in the fibonaki series");
        }
        else
        {
            printf("the number is not in the fibonaki series");
        }
        n1 = n2;
        n2 = n3;
    }
    return 0;
}