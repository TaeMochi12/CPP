#include<iostream>
using namespace std ;
int main() {
    string f,l,temp;
   cout<<"Enter the first name:";
   cin>>f;
   cout<<"Enter the last name:";
   cin>>l;
    temp=f;
    f=l;
    l=temp;
    cout<<f<<" "<<l;

 return 0 ;
}