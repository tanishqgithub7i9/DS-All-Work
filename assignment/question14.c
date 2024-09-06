// 14. Program to Calculate the sum of elements on the diagonals

#include<stdio.h>

int calculateDiagonalSum(int[][4] , int row);

int main()
{
    int array[4][4] = {{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
    printf("the sum is: %d",calculateDiagonalSum(array,4));
}

int calculateDiagonalSum(int array[][4] , int row)
{
    int sum = 0;

    for(int i = 0; i<row; i++)
        sum += array[i][i];

    return sum;
}