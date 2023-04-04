#include<iostream>
using namespace std ;
int main() {
    int n;
    cout<<"Enter the number:";
    cin>>n;
    if(n%2==0)
    {
        cout<<n<<" "<<"is even"<<endl;
    }
    else{
        cout<<"The entered no. is odd"<<endl;
    }
    return 0 ;
}