// 1  - 1.	WAP to find out the Triplet representation of any inputted Sparse matrix.
#include <stdio.h>
#define MAX_SIZE 100
void findTriplets(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols)
{
    int triplets[MAX_SIZE][3];
    int count = 0;
    // Traverse the matrix and find non-zero elements
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] != 0)
            {
                triplets[count][0] = i;
                triplets[count][1] = j;
                triplets[count][2] = matrix[i][j];
                count++;
            }
        }
    }
    // Print the triplets
    printf("Triplet representation of the sparse matrix:\n");
    for (int i = 0; i < count; i++)
    {
        printf("(%d, %d, %d)\n", triplets[i][0], triplets[i][1], triplets[i][2]);
    }
}
int main()
{
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, cols;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    findTriplets(matrix, rows, cols);
    return 0;
}

// 2 - 2.	WAP to find out the Transpose of any Sparse matrix. Input the Triplet matrix through the keyboard.
