#include<iostream>
using namespace std ;
class Base
{
    protected:
    int a;
    public:
    Base()
        {
            a=5;
        }
        void show()
        {
            cout<<"a="<<a<<endl;
        }
    
};
class derived:public Base{
int b;
public:
derived()
{
    b=10;
}
void show()
{
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}
};

int main() {
    derived ob;
    ob.show();
    return 0 ;
}