// question 1: Program to initialize an array and print its elements using a function

#include<stdio.h>

void printArray(int* , int);
int main()
{
    int array[5] = {1,2,3,4,5};

    printArray(array , 5);
}

void printArray(int *arr , int size)
{
    for(int i = 0; i<size; i++)
        printf("%d ",arr[i]);
}