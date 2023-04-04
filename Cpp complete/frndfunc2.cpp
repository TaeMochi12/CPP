#include<iostream>
using namespace std ;
class base;
class anotherclass{
    public : 
    void hello(base& t) ;
} ;
class base
{
    private:
    int a,b;
    public:
    void getdata()
    {
        cout<<"Enter the values of a and b";
        cin>>a>>b;
    }
    friend void anotherclass::hello(base& t);

};

void anotherclass::hello(base& t){
    cout<<t.a<<t.b ;
}

int main() {
    base x;
    anotherclass y;
    x.getdata();
    y.hello(x);
    return 0 ;
}