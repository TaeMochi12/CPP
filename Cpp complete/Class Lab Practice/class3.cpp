#include<iostream>
using namespace std ;
int main() {
    int n,t,i,sum,ld;
    cout<<"Enter the number:";
    cin>>n;
    t=n;
    sum=0;
    while(t>0)
    {
      ld=t%10;
      sum+=ld*ld*ld;
      t/=10;

    }
    if(n==sum)
    {
        cout<<"The number is an armstrong number"<<endl;
    }
    else{
        cout<<"The number is not an armstrong number"<<endl;
    }
    

    

    return 0 ;
}