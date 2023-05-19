#include <iostream>
using namespace std;
class complex
{
private:
    int a, b, c;

public:
    void getvalue()
    {
        cout << "enter values of a and b:";
        cin >> a >> b;
    }
    void operator++()
    {
        a = ++a;
        b = ++b;
    }
    void operator--()
    {
        a = --a;
        b = --b;
    }
    void display()
    {
        cout << a << "+" << b << "i" << endl;
    }
};

int main()
{
    complex c;
    c.getvalue();
    ++c;
    c.display();
    --c;
    c.display();
    return 0;
}