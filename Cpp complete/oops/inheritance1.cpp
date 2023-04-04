#include<iostream>
using namespace std ;
class A{
public:
int a;
};
class B: virtual public A{
public:
void put()
{
    a=10;
    cout<<"a1:"<<a<<endl;
}
};
class C:virtual public A{
public:
void give()
{
    a=20;
    cout<<"a2:"<<a<<endl;
}
};

int main() {
    B bb;
    C cc;
    // bb.a=10;
    // cc.a=20;
   
   bb.put();
   cc.give();
    return 0 ;
}
