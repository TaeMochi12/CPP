#include <iostream>
using namespace std;
int main()
{
    int nr, dr;
    cout << "Enter  the value of numerator and denominator:";
    cin >> nr >> dr;
    try
    {
        if (dr == 0)
        {
            throw dr;
        }
        cout << "Answer after division:" << nr / dr << endl;
    }
    catch (int exp)
    {
        cout << "Exception: Division can't be performed with denominator as 0" << endl
             << dr << endl;
    }
    cout << "End of program" << endl;
    cout << "Program done by HIMANSHI BHARDWAJ" << endl;
    return 0;
}
