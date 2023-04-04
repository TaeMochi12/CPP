#include<iostream>
using namespace std ;
class sqr_side
{
    private:
    int a;
    public:
    void set_side()
        {
            cout<<"Enter the side of square: ";
            cin>>a;
        }
        friend class area;
    
};

class area
{
 public:
 void sqr_area(sqr_side& t)
 {
    // cout<<t.a;
 cout<<"The area of the square="<<((t.a)*(t.a))<<endl;
 }
};

int main() {
    sqr_side side;
    area s1;
    side.set_side();
    s1.sqr_area(side);
    return 0 ;
}