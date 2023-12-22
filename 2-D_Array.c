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
/*#include <stdio.h>
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
}*/

// Sum of each row and column

/*#include <stdio.h>
int main()
{
    int a[10][10], row, col, i, j;
    printf("Enter row and column: \n");
    scanf("%d%d", &row, &col);
    printf("\nEnter first matrix:");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("\nEnter element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nDisplay entered matrix: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < row; i++)
    {
        int rowSum = 0;
        for (j = 0; j < col; j++)
        {
            rowSum += a[i][j];
        }
        printf("\nSum of %d row is %d", i + 1, rowSum);
    }
    for (j = 0; j < col; j++)
    {
        int colSum = 0;
        for (i = 0; i < row; i++)
        {
            colSum += a[i][j];
        }
        printf("\nSum of %d column is %d", i + 1, colSum);
    }
    return 0;
}*/

// Matrix Multiplication

/*#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], c[20][20], r1, r2, c1, c2, i, j, k;

    printf("Enter row and column for 1st matrix: \n");
    scanf("%d%d", &r1, &c1);

    printf("\nEnter elements for 1st matrix:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter row and column for 2nd matrix: \n");
    scanf("%d%d", &r2, &c2);

    printf("\nEnter elements for 2nd matrix:\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nDisplay matrix 1: \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }

    printf("\nDisplay matrix 2: \n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("\t%d", b[i][j]);
        }
        printf("\n");
    }

    if (c1 != r2)
    {
        printf("\nMultiplication not possible.\n");
        return 1;
    }

    // Initialize result matrix elements to 0
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            c[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            for (k = 0; k < c1; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nResultant Matrix (Matrix 1 * Matrix 2):\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}*/
