#include <stdio.h>
#include <stdbool.h>

#define MAX 100 // Maximum size of the matrix

bool isTriDiagonal(int matrix[MAX][MAX], int size);

int main()
{
    int matrix[MAX][MAX];
    int size;

    // Input the size of the matrix
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    // Input the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is tri-diagonal
    if (isTriDiagonal(matrix, size))
    {
        printf("The matrix is a tri-diagonal matrix.\n");
    }
    else
    {
        printf("The matrix is NOT a tri-diagonal matrix.\n");
    }

    return 0;
}

bool isTriDiagonal(int matrix[MAX][MAX], int size)
{
    // Iterate through the matrix to check the conditions
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            // Elements that are not on the main diagonal, sub-diagonal, or super-diagonal should be zero
            if (i != j && i != j + 1 && i != j - 1)
            {
                if (matrix[i][j] != 0)
                {
                    return false; // If any of these elements are non-zero, it's not tri-diagonal
                }
            }
        }
    }

    // If the matrix passes all checks, it is tri-diagonal
    return true;
}
