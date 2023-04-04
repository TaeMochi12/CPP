#include<iostream>
using namespace std ;
class area 
{
int a,l,b;
public:
area();
area(int x, int y);
~area();
void calc();
void print();

};
area::area()
{
    l=4;
    b=6;
    
    cout<<"Simple constructor is called"<<endl;
    cout<<"Length="<<l<<" "<<"Breadth="<<b<<endl;
    
}
area::area(int x, int y)
{
    l=x;
    b=y;
}
void area::calc()
{
a=l*b;

}
void area::print(){
    cout<<"Area is "<<a<<endl;
}
area::~area()
{
    cout<<"Object is deleted"<<endl;
}


int main() {
    area a1;
    
    a1.calc();
    a1.print();
    int l,b;
    cout<<"Enter the length and breadth for parameterized constructor"<<endl;
    cin>>l>>b;
    area a2(l,b);
    a2.calc();
    a2.print();
    return 0 ;
}