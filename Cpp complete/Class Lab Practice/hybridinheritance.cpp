#include<iostream>
using namespace std ;
class A
{
    public:
    int a;
    int e=5;
    public:
    void value()
    {
        cout<<"Enter the value of a:";
        cin>>a;
        cout<<"a="<<a<<endl;
    }
    void newvalue(int x)
    {
        a=x;
        cout<<"a="<<a<<endl;
    }
};
class B:public A{};
class C{
public:
int b=10;
};
class D:public B,C{
 int c=20;
 int d;
 public:
 void sum()
 {
d= c+b+e;
cout<<"Sum of b,c and e is="<<d;
 }
 
};

int main() {
    D obj;
    obj.a=10;
    cout<<"Value of a:"<<obj.a<<endl;
    obj.value();
    obj.newvalue(8);
    obj.sum();

    return 0 ;
}