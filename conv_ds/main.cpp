#include"postfix.cpp"

int main()
{
    PostFix obj = PostFix("(a+b)*(a-b)",1);
    obj.postFix();

    cout<<obj;

    return 0;

}

