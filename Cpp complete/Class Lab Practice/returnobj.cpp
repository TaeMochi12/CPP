#include<iostream>
using namespace std ;
class Complex
{
    private:
    float real,imag;
    public:
    void read()
    {
        cout<<"Enter real and imaginary values"<<endl;
        cin>>real>>imag;

    }
Complex sum(Complex t)
    {
        Complex c3;
        c3.real=real+t.real;
        c3.imag=imag+t.imag;
        return c3;
    }
    void display()
    {
       if(imag==-1)
       {
        cout<<"Sum is:"<<real<<"-i"<<endl;
       }
       if(imag==0){
        cout<<"Sum is:"<<real<<endl;
       }
       if(imag==1)
       {
        cout<<"Sum is:"<<real<<"+i"<<endl;
       }
       else
        cout<<"Sum is:"<<real<<'+'<<imag<<"i"<<endl;
    }
};

int main() {
    Complex c1,c2,c3;
    c1.read();
    c2.read();
    c3=c1.sum(c2);
    c3.display();
    return 0 ;
}
