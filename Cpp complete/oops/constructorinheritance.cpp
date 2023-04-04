#include<iostream>
using namespace std ;
class A
{
public:
int a;
A(){
a=10;
}
};
class B: public A{
public:
int b=20;
void sum()
{
    cout<<a+b<<endl;

}
};

int main() {
    B bb;
    cout<<bb.a<<endl;
   bb.sum();
 
    return 0 ;
}