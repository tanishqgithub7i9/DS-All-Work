#include<stdlib.h>
#include<iostream>

class Stack{
    
    private:
        int* arr;
        int top = -1;
        int size = 0;

        bool isFull()
        {
            return top == (size - 1);
        }
        bool isEmpty()
        {
            return top == -1;
        }

    public:
    Stack(int s)
    {
        arr = (int*)calloc(s , sizeof(int));
        size = s;
    }

    int poop(){
        if(isEmpty())
            return 0;
        else
        {
            top--;
            return 1;
        }
    }

    int push(int data){
        if(isFull())
            return 0;
        else
        {
            top++;
            arr[top] = data;
            return 1;
        }
    }

    void display(){
        for(int i = top; i >= 0; i--)
            std::cout<<"| "<<arr[i]<<" |"<<std::endl;
        return;
    }

    int peek(){
        return arr[top];
    }

   
};  