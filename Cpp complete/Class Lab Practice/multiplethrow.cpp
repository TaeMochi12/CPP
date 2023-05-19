#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
    try
    {
        if (n > 0)
        {
            throw 1;
        }
        else if (n == 0)
        {
            throw 'H';
        }
        else if (n < 0)
        {
            throw 1.2;
        }
    }
    catch (int exp)
    {
        cout << "Integer exception caught:" << 1 << endl;
    }
    catch (char exp)
    {
        cout << "Character exception caught:" << 'H' << endl;
    }
    catch (double exp)
    {
        cout << "Double exception caught:" << 1.2 << endl;
    }
    cout << "End of program" << endl;
    cout << "Program done by HIMANSHI BHARDWAJ" << endl;

    return 0;
}
