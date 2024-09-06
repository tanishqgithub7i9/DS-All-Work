// 13. Write a program to insert the element at nth position in an array.

#include<stdio.h>

int insert(int* , int , int , int);

int main()
{
    int array[5] = {1,2,3,4,0};
    int position , data;
    printf("Enter the place and the data: ");
    scanf("%d %d",&position , &data);

    if(!insert(array , 5 , position , data))
        printf("not possible!!!!");
    printf("\n");
    for(int i = 0; i<5; i++)
        printf("%d ",array[i]);
}

int insert(int* array , int size , int position , int data)
{
    if(position > (size-1))
        return 0;
    else
    {
        // printf("I am in");
        for(int i = (size-1); i>position; i--)
        {
            array[i] = array[i-1];
            // printf("I am in");
        }
        array[position] = data;
    }
    return 1;
}