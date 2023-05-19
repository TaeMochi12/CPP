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
    int n, marks;
    cout << "Enter the number of students:";
    cin >> n;
    demo *d = new demo[n];
    int sum = 0;
    cout << "Enter marks of students:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> marks;
        d[i] = marks;
    }
    cout << "Sum of marks of students:" << sum << endl;
    delete[] d;
    return 0;
}
