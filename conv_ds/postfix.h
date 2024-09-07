#ifndef POSTFIX_H
#define POSTFIX_H
#include"conversion.h"
#include<string>

class PostFix : public Conversion
{
private:
    std::string strPost;

public:
    PostFix(std::string str, int steps = 0) : Conversion(str, steps) {}
    void postFix();
    friend std::ostream &operator<<(std::ostream &cout, PostFix &obj);
};

#endif