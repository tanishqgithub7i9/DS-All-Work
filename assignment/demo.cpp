#include<iostream>
using namespace std;

class abc
{
    public:
    // abc()
    // {
    //     cout<<"default";
    // }
    abc(int i)
    {
        cout<<"paratarimised const: "<<i<<endl;
    }
};

int main()
{
    abc obj(8);
}