#include <stdio.h>

void multiplyMatrices(int firstMatrix[3][3], int secondMatrix[3][3], int resultMatrix[3][3]);

int main()
{
    int firstMatrix[3][3], secondMatrix[3][3], resultMatrix[3][3];

    // Input for the first 3x3 matrix
    printf("Enter elements of the first 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    // Input for the second 3x3 matrix
    printf("Enter elements of the second 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    // Call the function to multiply the two matrices
    multiplyMatrices(firstMatrix, secondMatrix, resultMatrix);

    // Output the result matrix
    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", resultMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// Function to multiply two 3x3 matrices
void multiplyMatrices(int firstMatrix[3][3], int secondMatrix[3][3], int resultMatrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            resultMatrix[i][j] = 0; // Initialize result matrix element to 0
            for (int k = 0; k < 3; k++)
            {
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}
