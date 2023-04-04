#include<iostream>
using namespace std ;
class class1{
    public:
    int a;
    int b;

};


int main() {
    class1 obj,obj2;
    obj.a=12;
    obj.b=18;
    obj2.a=10;
    obj2.b=14;
    cout<<obj.a<<" "<<obj.b<<endl;
    cout<<obj2.a<<" "<<obj2.b<<endl;
    return 0 ;
}