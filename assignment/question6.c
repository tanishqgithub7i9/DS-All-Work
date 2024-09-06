// 6. Write a program to check whether a given matrix is sparse matrix or not.
#include<stdio.h>
int isSparxMatrix(int[][4] , int , int);

int main()
{
    int array[4][4] = {{1,2,3,4},{2,3,4,0},{0,0,0,0},{0,0,0,0}};
    
    if(isSparxMatrix(array , 4 , 4))
        printf("Yes, the given matrix is sparx matrix");
    else
        printf("No, given matrix is not sparx matrix.");
}

int isSparxMatrix(int arr[][4] , int row , int col)
{
    int zeroCount = 0;
    int tEle = row*col;

    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            if(arr[i][j] == 0)
                zeroCount++;
            if(zeroCount > (tEle/2))
                return 1;
        }
    }
    return 0;
}