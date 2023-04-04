#include<iostream>
using namespace std ;
int fact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    return n*fact(n-1);
}
int main() {
    int n,c;
    cout<<"Enter the number whose factorial is to be found:";
    cin>>n;
    c=fact(n);
    cout<<"The factorial of the given number is "<<c<<endl;
    return 0 ;
}