#include <iostream>
using namespace std;
class space
{
    int x, y, z;

public:
    void getdata(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void display()
    {
        cout << x << endl;
        cout << y << endl;
        cout << z << endl;
    }
    void operator+()
    {
        x = -x;
        y = -y;
        z = -z;
    }
};
int main()
{
    space s;
    s.getdata(10, -20, 30);
    s.display();
    +s;
    s.display();
    return 0;
}