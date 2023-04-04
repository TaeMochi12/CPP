#include <iostream>
using namespace std;
int main()
{
    int arr[5], temp;
    cout << "Enter the digits of the number:";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i] ;
    }
    cout << "The number is: ";
    for (int j = 0; j < 5; j++)
    {
        cout << arr[j];
    }
    cout << endl;
    temp = arr[0];
    arr[0] = arr[4];
    arr[4] = temp;
    cout << "The new number is:";
    for (int k = 0; k < 5; k++)
    {
        cout << arr[k];
    }

    return 0;
}