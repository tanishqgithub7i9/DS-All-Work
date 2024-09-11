#include"postfix.h"
#include<iostream>
using namespace std;

int main()
{
    PostFix obj("((a+b)^c-(d*e)/f)", 1);
    obj.postFix();

    cout<<obj;

    return 0;

}

