using namespace std;
#include"conversion.h"
#include<string>
#include<stack>
#include<iostream>
#include<algorithm>

int Conversion::precedence(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '^' || ch == '$')
        return 3;
    return 0;
}


// 
int Conversion::isLeftToRight(char ch1 , char ch2)
{
    if(ch1 == '$' && ch2 == '^')
        return 0;
    else if(ch1 == '^' && ch2 == '$')
        return 0;
    return 1;
}



// functions helps in printing the instructions. if user requres.
void Conversion::printStack(stack<char> &s)
{
    string result;
    stack<char> temp = s;
    while (!temp.empty())
    {
        result += temp.top();
        temp.pop();
    }

    reverse(result.begin() , result.end());

    cout<<result<<" , ";
}

void Conversion::elementPopped(stack<char> &s)
{
    cout << "Stack element is popped: ";
    printStack(s);
}

void Conversion::elementPushed(stack<char> &s)
{
    cout << "Stack element is pushed: ";
    printStack(s);
}

