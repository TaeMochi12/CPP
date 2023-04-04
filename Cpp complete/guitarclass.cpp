#include<iostream>
using namespace std ;
class guitar{
public:
void play()
{
    cout<<"The guitar is playing"<<endl;
}
void stop()
{
    cout<<"The guitar is not playing"<<endl;
}
};
int main() {
    guitar method;
    method.play();
    method.stop();

    
    return 0 ;
}