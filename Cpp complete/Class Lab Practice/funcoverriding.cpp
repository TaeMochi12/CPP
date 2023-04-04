#include<iostream>
using namespace std ;
class base
{
public:
int a;
void input()
{
   
    a=10;
    cout<<"a="<<a<<endl;;

}


};
class derived:public base{
public:
void input()
    {
        a=20;
        cout<<"a="<<a<<endl;
    }

};
int main() {
    derived d;
    d.input();
    return 0 ;
}