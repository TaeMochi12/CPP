#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int L,K;
        cin>>L>>K;
        if(L%K==0) cout<<"0"<<endl; else cout<<"1"<<endl;
    }
    return 0;
}