#include"postfix.h"
#include<stack>
#include<iostream>

void PostFix::postFix()
{
    std::stack<char> s;
    std::string result;
    int increment = 1;

    for (auto &ele : this->str)
    {
        // if user wants the instructions.
        if (this->steps)
            std::cout << increment << " ";

        // isalnum function return me. if it see any alpha numeric number '0' to '9' or 'a' to 'z' or 'A' to 'Z' then returns 1.
        if (isalnum(ele))
        {
            result += ele;
            if (this->steps)
                std::cout << "Element is written: " << result << " ";
        }
        else if (ele == '(')
        {
            s.push(ele);
            if (this->steps)
                Conversion::elementPushed(s);
        }
        else if (ele == ')')
        {
            while (!s.empty() && s.top() != '(')
            {
                result += s.top();
                s.pop();
                if (this->steps)
                {
                    std::cout << "Element is written in result: " << result << " ";
                    Conversion::elementPopped(s);
                }
            }
            s.pop(); // removing '('
            if (this->steps)
                Conversion::elementPopped(s);
        }
        // if any operator is arrived.
        else
        {
            while (!s.empty() && (Conversion::precedence(s.top()) >= Conversion::precedence(ele)) && Conversion::isLeftToRight(s.top(), ele))
            {
                result += s.top();
                s.pop();
                if (this->steps)
                {
                    std::cout << "Element written into result: " << result << " ";
                    Conversion::elementPopped(s);
                }
            }
            s.push(ele);
            if (this->steps)
                Conversion::elementPushed(s);
            // }
        }
        increment++;
        if (this->steps)
            std::cout << std::endl;
    }

    strPost = result;
}

std::ostream& operator<<(std::ostream& cout , PostFix& obj)
{
    std::cout<<std::endl<<"In-Fix: "<<obj.str;
    std::cout<<std::endl<<"Post-Fix: "<<obj.strPost;
}