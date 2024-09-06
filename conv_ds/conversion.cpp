using namespace std;
#include<string>
#include<stack>
#include<iostream>
#include<algorithm>
class Conversion
{
    // variable descriptions.
    protected:
        // 0 means user don't need steps printed and 1 for wants.
        int steps;
        // holds the original string entered by user.
        string str;

        // helps to print the instructions.
        void printStack(stack<char> &);
        void elementPopped(stack<char> &);
        void elementPushed(stack<char> &);
        int isLeftToRight(char ch1, char ch2);
        //constructor to take input.
        Conversion(string temp, int s = 0) 
        {
            str = temp;
            steps = s;
        }
        // checking the precedence of the operator
        int precedence(char);
};

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

