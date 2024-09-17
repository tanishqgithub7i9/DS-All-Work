/*
10. Print and store the sparse matrix using arrays (TIP: Row major order or column major order to store the non-zero elements into array.)
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int array[4][4];
    int zeroCount = 0;

    for(int i = 0; i<4; i++)
    {
        for(int j = 0; j<4; j++)
        {
            scanf("%d",&array[i][j]);
            if(array[i][j] != 0)
                zeroCount++;
        }
    }

    int** sparseMatrix = (int**)calloc(zeroCount , sizeof(int*));

    for(int i = 0; i<zeroCount; i++)
        sparseMatrix[i] = (int*)calloc(3 , sizeof(int));
    
    int k = 0;
    for(int i = 0; i<4; i++)
    {
        for(int j = 0; j<4; j++)
        {
            if(array[i][j] != 0)
            {
                sparseMatrix[k][0] = i;
                sparseMatrix[k][1] = j;
                sparseMatrix[k][2] = array[i][j];
                k++;
            }
        }
    }

    //print sparse

    for(int i = 0; i<zeroCount; i++)
        printf("row: %d col: %d data: %d\n",sparseMatrix[i][0] , sparseMatrix[i][1], sparseMatrix[i][2]);
}