// 8. WAP to merge two sorted array of same size in descending order.
#include<stdio.h>
#include<stdlib.h>

int* mergeInDesc(int* , int , int* , int);

int main()
{
    int array[4] = {40,30,20,10};
    int array2[4] = {4,3,2,1};

    int* merged = mergeInDesc(array , 4 , array2 , 4);

    for(int i = 0; i<8; i++)
        printf(" %d ",merged[i]);

}

int* mergeInDesc(int* arr1 , int s1 , int* arr2 , int s2)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int* merged = (int*)calloc((s1+s2) , sizeof(int));

    while((i < s1) && (j < s2))
    {
        if(arr1[i] >= arr2[j])
        {
            merged[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            merged[k] = arr2[j];
            j++;
            k++;
        }
    }

    while(i < s1)
    {
        merged[k] = arr1[i];
        i++;
        k++;
    }
    while(j < s2)
    {
        merged[k] = arr2[j];
        j++;
        k++;
    }
    return merged;
}