#include<iostream>
using namespace std ;
class Base
{
    protected:
    int a;
    public:
    void input(int a)
        {
           (*this).a=a; // dot ki precedence * se zada h isliye bracket
                        //either use this-> or (*this). *this means object that's why use dot operator
        }
        void show()
        {
            cout<<"a="<<a<<endl;
        }
    
};


int main() {
    Base obj1,obj2;
    obj1.input(5);
    obj2.input(10);
    obj1.show();
    obj2.show();
    return 0 ;
}