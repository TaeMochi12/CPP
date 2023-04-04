#include<iostream>
using namespace std ;
class A{
public:
int a;
};
class B: virtual public A{
void put()
{
    a=10;
}
};
class C:virtual public A{
void give()
{
    a=20;
}
};

int main() {
    B bb;
    C cc;
    // bb.a=10;
    // cc.a=20;
    cout<<"a1:"<<bb.a<<endl;
    cout<<"a2:"<<cc.a<<endl;
    return 0 ;
}