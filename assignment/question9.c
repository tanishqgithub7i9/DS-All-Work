// 9. Program to check whether a given matrix is upper triangular matrix or lower triangular matrix.

#include<stdio.h>

void isUpperOrLower(int[][4] , int row , int col);

int main()
{
    int array[4][4] =   {
                        {1,2,3,4},
                        {0,3,4,5},
                        {0,0,6,7},
                        {0,0,0,5}};

    isUpperOrLower(array,4,4);
}

void isUpperOrLower(int array[][4] , int row , int col)
{
    int upperTriangle = 1;
    int lowerTriangle = 1;

    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            if((j > i) && array[i][j] != 0)
                upperTriangle = 0;
            else if((j < i) && array[i][j] != 0)
                lowerTriangle = 0;
        }
    }

    if(lowerTriangle)
        printf("You have entered an lower triangle");
    else if(upperTriangle)
        printf("You have entered an upper triangle");
    else
        printf("neither upper now lower triangle.");
    
}