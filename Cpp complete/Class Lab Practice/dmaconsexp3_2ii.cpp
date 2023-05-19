#include <iostream>
using namespace std;
class demo
{
public:
    demo()
    {
        cout << "Constructor called" << endl;
    }
    ~demo()
    {
        cout << "Destructor called" << endl;
    }
};
int main()
{
    demo *d = new demo[4];
    for (int i = 0; i < 2; i++)
    {
        delete &(d[i]);
    }

    cout << "Program done by HIMANSHI BHARDWAJ" << endl;
    return 0;
}
