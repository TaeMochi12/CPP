#include<iostream>
using namespace std ;


/*
There are four types of access modifiers in cpp : 
1: public 
2: protected 
3: private 
4: default


Features of oops : 

1: Abstraction 
2: Encapsulation
3: Inheritence 
4: Polymorphism
5: Security 

*/

class hp{
    public : 
    int a = 10 ;
    int b = 10 ;

    void sum(){
        cout<<a+ b ; 
    }
};


int main() {
     hp hpp ;
     hpp.a =12 ;
     hpp.b = 13;

     hpp.sum() ;

    return 0 ;
}