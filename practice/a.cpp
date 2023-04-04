#include<iostream>
using namespace std ;


// function with return type 
int sum (int  a , int b  ){
     
     a  = a + 5 ;
    
     return a ; 
}

int call_reference(int &a){
   a  = a *  5 ;
   cout<<"address of a "<< &a << endl ;
   return a ;
}

int print(int n ){

    if(n == 0)  return 0 ;
     cout<< n << endl ;
    return print(n-1) ;
   }

// function without return type 
void sum(int a , int b , int c){
    //  call by value 
     a  = a +5 ; 

}
int main() {
    // int a  , b , c ;
    // cin >>  a  >> b  >> c;
    // sum(a , b , c) ;
   print(5) ;
//   int d =  sum(a  , b ) ;
//    cout<<  a <<" " <<d<< endl ; 
//     int f = call_reference(a) ;
//    cout<<"address of f " << &f<<endl  ;
//    cout<< "address of a in main " <<&a << endl ;
    return 0 ;
}