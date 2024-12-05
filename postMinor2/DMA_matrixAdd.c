#include <stdio.h>
#include <stdlib.h>

void inputMatrix(int **matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int **matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Allocate memory for 1st dimension of the matrices
    // to get array of pointers
    int **matrix1 = (int **)malloc(rows * sizeof(int *));
    int **matrix2 = (int **)malloc(rows * sizeof(int *));
    int **result = (int **)malloc(rows * sizeof(int *));

    // allocate memory for all elements of each row (== #cols) of the matrices,
    // i.e., memory for the 2nd dimension
    for (int i = 0; i < rows; i++)
    {
        matrix1[i] = (int *)malloc(cols * sizeof(int));
        matrix2[i] = (int *)malloc(cols * sizeof(int));
        result[i] = (int *)malloc(cols * sizeof(int));
    }

    // Input first matrix
    printf("Enter elements of the first matrix:\n");
    inputMatrix(matrix1, rows, cols);

    // Input second matrix
    printf("Enter elements of the second matrix:\n");
    inputMatrix(matrix2, rows, cols);

    // Perform matrix addition
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the result
    printf("The resulting matrix after addition is:\n");
    printMatrix(result, rows, cols);

    // Free allocated memory of each row, 2nd dimension
    for (int i = 0; i < rows; i++)
    {
        free(matrix1[i]);
        free(matrix2[i]);
        free(result[i]);
    }
    // free the 1st dimension
    free(matrix1);
    free(matrix2);
    free(result);

    return 0;
}