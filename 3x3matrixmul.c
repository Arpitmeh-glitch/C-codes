#include <stdio.h>

int main()
{
    int matrix[3][3];
    int i, j;

    printf("enter elements of the 3x3 matrix=");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("element [%d][%d]= ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("sum of row=");
    for (i = 0; i < 3; i++)
    {
        int rowsum = 0;
        for (j = 0; j < 3; j++)
        {
            rowsum += matrix[i][j];
        }
        printf("Row %d sum = %d\n", i + 1, rowsum);
    }

    printf("sum of column=");
    for (j = 0; j < 3; j++)
    {
        int colsum = 0;
        for (i = 0; i < 3; i++)
        {
            colsum += matrix[i][j];
        }
        printf("Column %d sum = %d\n", j + 1, colsum);
    }

    return 0;
} //
