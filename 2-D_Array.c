// WAP to add to matrices.

/*#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], c[20][20], row, col, i, j;
    printf("Enter number of rows and columns for first matrix: \n");
    scanf("%d%d", &row, &col);
    printf("\nEnter first matrix: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter elements: ");
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter second matrix: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter elements: ");
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nThe sum of two matrices is : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/

// Transpose of a matrix

/*#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], row, col, i, j;
    printf("Enter number of rows and columns for first matrix: \n");
    scanf("%d%d", &row, &col);
    printf("\nEnter matrix: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter elements: ");
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nOriginal Matrix: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    printf("\nTransposed Matrix:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/

// Sum of the diagonal elements
#include <stdio.h>
int main()
{
    int a[10][10];
    int i, j, n, trace = 0;

    printf("Enter the size of the square matrix (max 10): ");
    scanf("%d", &n);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        trace += a[i][i];
    }

    printf("\nThe matrix is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\nThe sum of diagonal elements is: %d\n", trace);
    return 0;
}
