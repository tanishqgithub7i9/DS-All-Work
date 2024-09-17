// 7. Program to copy elements of one array to another array in reverse order.

#include<stdio.h>

int copyReverse(int* , int , int* , int);

int main()
{
    int arr1[4] = {1,2,3,4};
    int arr2[4] = {1,2,3,4};

    copyReverse(arr1,4,arr2,4);

    for(int i = 0; i<4; i++)
        printf(" %d ",arr2[i]);
}

int copyReverse(int* arr1 , int s1 , int* arr2 , int s2)
{
    if(s1 != s2)
    {
        printf("\nSorry, due to the size copy won't be possible");
        return 0;
    }
    else
    {
        for(int i = (s2-1); i>=0; i--)
            arr2[i] = arr1[s2-i-1];
    }
    return 1;
}