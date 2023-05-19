#include <iostream>
using namespace std;
class demo
{
    int a, b;

public:
    void getdata()
    {
        cout << "Enter the values of a and b:" << endl;
        cin >> a >> b;
    }
    void display()
    {
        cout << "value of a=" << a << endl;
        cout << "value of b=" << b << endl;
    }
    demo operator+(demo bb)
    {
        demo cc;
        cc.a = a + bb.a;
        cc.b = b + bb.b;
        return cc;
    }
};
int main()
{
    demo aa, bb, cc;
    aa.getdata();
    bb.getdata();
    cc = aa + bb;
    cc.display();
    return 0;
}