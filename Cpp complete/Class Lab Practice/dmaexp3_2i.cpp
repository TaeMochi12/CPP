#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout << "Enter the number of students:";
    cin >> n;
    int *marks = new int[n];
    cout << "Enter the marks of students:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> *(marks + i);
        sum += *(marks + i);
    }
    cout << "Sum of marks of students:" << sum << endl;
    cout << "End of program" << endl;
    cout << "Program done by HIMANSHI BHARDWAJ" << endl;
    return 0;
}
