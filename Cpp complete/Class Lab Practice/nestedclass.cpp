#include <iostream>
using namespace std;
class outer
{
public:
    int a = 10;
    class inner
    {
    public:
        int b = 20;
    };
};
int main()
{
    outer obj;
    outer::inner obj1;
    cout << obj.a << endl;
    cout << obj1.b;

    return 0;
}
