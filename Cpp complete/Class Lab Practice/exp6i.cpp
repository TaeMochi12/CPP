#include<iostream>
using namespace std ;

int cube(int a)
{
    int c;
    c=a*a*a;
    return c;
}
float cube(float a)
{
    float c;
    c=a*a*a;
    return c;
}

int main() {
    int a=5;
    float b=5.5;
    cout<<"Cube of integer="<<cube(a)<<endl;
    cout<<"Cube of floating number="<<cube(b)<<endl;
    return 0 ;
}