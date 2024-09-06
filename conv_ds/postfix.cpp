#include"conversion.cpp"

class PostFix : public Conversion
{
    private:
        string strPost;
    
    public:
        PostFix(string str , int steps = 0):Conversion(str , steps){}
        void postFix();
        friend ostream& operator<<(ostream &cout , PostFix &obj);

};

void PostFix::postFix()
{
    stack<char> s;
    string result;
    int increment = 1;

    for (auto &ele : this->str)
    {
        // if user wants the instructions.
        if (this->steps)
            cout << increment << " ";

        // isalnum function return me. if it see any alpha numeric number '0' to '9' or 'a' to 'z' or 'A' to 'Z' then returns 1.
        if (isalnum(ele))
        {
            result += ele;
            if (this->steps)
                cout << "Element is written: " << result << " ";
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
                    cout << "Element is written in result: " << result << " ";
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
                    cout << "Element written into result: " << result << " ";
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
            cout << endl;
    }

    strPost = result;
}

ostream& operator<<(ostream& cout , PostFix& obj)
{
    cout<<endl<<"In-Fix: "<<obj.str;
    cout<<endl<<"Post-Fix: "<<obj.strPost;
}