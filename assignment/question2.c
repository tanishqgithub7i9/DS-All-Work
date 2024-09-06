// 2. Program to merge two arrays into one using a function.
#include<stdio.h>
#include<stdlib.h>

int* merge(int* ,int, int*,int);

int main()
{
    int array1[4] = {1,2,3,4};
    int array2[4] = {5,6,7,8};
    int s1 = 4;
    int s2 = 4;

    int *mergedArray = merge(array1 , s1 , array2 , s2);

    for(int i = 0; i<(s1+s2); i++)
        printf("%d ",mergedArray[i]);

    
    free(mergedArray);

    return 0;
}

int* merge(int *arr1 ,int s1, int *arr2 , int s2)
{
    int *merge = (int*)calloc((s1+s2) , sizeof(int));

    for(int i = 0; i < (s1+s2); i++)
    {
        merge[i] = arr1[i];
        if(i >= s1)
            merge[i] = arr2[i-s1];
    }


    return merge;
}