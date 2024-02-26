/*#include <stdio.h>
#define MAX_SIZE 100
typedef struct
{
    int row;
    int col;
    int value;
} Triplet;

void findSparseTriplet(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols, Triplet triplets[], int *numTriplets)
{
    int count = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] != 0)
            {
                triplets[count].row = i;
                triplets[count].col = j;
                triplets[count].value = matrix[i][j];
                count++;
            }
        }
    }

    *numTriplets = count;
}

int main()
{
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    Triplet triplets[MAX_SIZE * MAX_SIZE];
    int numTriplets = 0;
    findSparseTriplet(matrix, rows, cols, triplets, &numTriplets);

    printf("Triplet representation of the sparse matrix:\n");
    for (int i = 0; i < numTriplets; i++)
    {
        printf("(%d, %d, %d)\n", triplets[i].row, triplets[i].col, triplets[i].value);
    }

    return 0;
}*/