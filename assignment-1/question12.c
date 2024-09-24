// 12. WAP to search an element in an array using binary search.

#include<stdio.h>
#include<conio.h>

int binarySearch(int[][4] , int, int , int);
int main()
{
    int array[4][4] =   {
                        {1,2,3,4},
                        {2,3,4,5},
                        {3,4,5,6},
                        {4,5,6,7}
                        };
    
    
}

int binarySearch(int array[][4] , int row , int col , int target) 
{
    int left = 0;
    int right = row * col - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        int midValue = array[mid / col][mid % col];

        if (midValue == target)
        {
            return mid;
        }
        else if (midValue < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1; // Element not found
}

