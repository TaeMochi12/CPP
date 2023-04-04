#include<iostream>
#include <typeinfo>
using namespace std ;
int main() {
    int b = 10 ;
    int *a= &b ;
    auto it = a;
    cout<<*it<<endl ;
    return 0 ;
}