#include<iostream>
using namespace std ;
class base
{
   private:
    int a,b,sum;
   
    public:
     void setdata()
    {
        cout<<"Enter the values of a and b: ";
        cin>>a>>b;
    }
    void sumcalc()
    {
        sum=a+b;
    }
    
    friend int frndfunc(base& t);

};

int frndfunc(base& t)
{
    cout<<"The value of sum= "<<t.sum<<endl;
}

int main() {
    base b;
    b.setdata();
    b.sumcalc();
    frndfunc(b);

    
    return 0 ;
}