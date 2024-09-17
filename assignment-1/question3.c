/*3. Program to check if an array is sorted in ascending or
descending order using a function.*/
#include<stdio.h>

int isAscending(int* , int);
int isDescending(int* , int);

int main()
{
    int array[5] = {7,6,5,4,3};
    int size = 5;

    int result = isAscending(array , size);

    if(result)
        printf("yes the array is in ascending order");
    else
    {
        result = isDescending(array , size);
        if(result)
            printf("Yes the array is in Descending order");
        else
            printf("The array is neither ascending nor descending");
    }

    return 0;
}

int isAscending(int *arr , int size)
{
    if(size == 1)
        return 1;
    else
    {
        for(int i = 1; i<size; i++)
        {
            if(arr[i-1] <= arr[i])
                continue;
            else
                return 0;
        }
    }
    return 1;
}

int isDescending(int *arr , int size)
{
    if (size == 1)
        return 1;
    else
    {
        for (int i = 1; i < size; i++)
        {
            if (arr[i - 1] >= arr[i])
                continue;
            else
                return 0;
        }
    }
    return 1;
}