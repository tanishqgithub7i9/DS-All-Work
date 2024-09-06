// 4. Program to find the transpose of a 2D array
#include<stdio.h>

int transpose(int[][4] , int row , int col);
void printArray(int [][4] , int row , int col);

int main()
{
    int array[4][4] = {{1,2,3,4},{4,3,2,1},{5,6,7,8},{8,7,6,5}};

    transpose(array , 4, 4);

    printArray(array , 4 , 4);
}

void printArray(int array[][4] , int row , int col)
{
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
            printf(" %d ",array[i][j]);
        printf("\n");
    }
}

int transpose(int arr[][4], int row, int col)
{
    for(int i = 0; i<row; i++)
    {
        for(int j = i+1; j<col; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
}