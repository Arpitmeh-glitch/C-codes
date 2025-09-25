#include <stdio.h>
int main()
{
    int i, j, r, c;
    int mat[10][10], tpose[10][10];
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &r, &c);
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            tpose[j][i] = mat[i][j];
        }
    }
    printf("Original Matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of the Matrix:\n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("%d\t", tpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
