#include <iostream>
using namespace std;

#define MAX(a, b, c) (a > b && a > c ? a : (b > c ? b : c))

#define MIN(a, b, c) (a < b && a < c ? a : (b < c ? b : c))

int main()

{

    int x, y, z, large, small;

    cout << "Enter 3 numbers: " << endl;

    cin >> x >> y >> z;

    large = MAX(x, y, z);

    small = MIN(x, y, z);

    cout << "Maximum among " << x << " " << y << " "
         << "and " << z << " "
         << "is " << large << endl;
    cout << "Minimum among " << x << " " << y << " "
         << "and " << z << " "
         << "is " << small << endl;
    return 0;
}
