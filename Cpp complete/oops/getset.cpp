#include<iostream>
using namespace std ;
class rect_area
{
    private:
    int l,b;
    public:
    void set_dimnsns()
    {
        cout<<"Enter the length and breadth of rectangle:";
        cin>>l>>b;
    
    }
    int get_area()
    {
        cout<<"Area of the rectangle="<<(l*b)<<endl;
    }
};
int main() {
    rect_area r1;
    r1.set_dimnsns();
    r1.get_area();
     return 0 ;
}