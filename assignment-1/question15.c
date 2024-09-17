// 15. Write a c program to delete an element in the array.

#include<stdio.h>
int deleteElement(int* , int , int);

int main()
{
    int array[5] = {1,2,3,4,5};
    if(!deleteElement(array,5,0))
        printf("Not possible deletion");

    for(int i = 0; i<5; i++)
        printf("%d ",array[i]);
    
    return 0;

}

int deleteElement(int *array , int size , int position)
{
    if(position > (size-1))
        return -1;
    else
    {
        for(int i = position; i < (size-2); i++)
            array[i] = array[i+1];
        array[position] = 0;
        return 1;
    }
}