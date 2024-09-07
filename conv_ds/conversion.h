#ifndef CONVERSION_H
#define CONVERSION_H
#include<string>
#include<stack>

class Conversion
{
    // variable descriptions.
protected:
    // 0 means user don't need steps printed and 1 for wants.
    int steps;
    // holds the original string entered by user.
    std::string str;

    // helps to print the instructions.
    void printStack(std::stack<char> &);
    void elementPopped(std::stack<char> &);
    void elementPushed(std::stack<char> &);
    int isLeftToRight(char ch1, char ch2);
    // constructor to take input.
    Conversion(std::string temp, int s = 0)
    {
        str = temp;
        steps = s;
    }
    // checking the precedence of the operator
    int precedence(char);
};

#endif 