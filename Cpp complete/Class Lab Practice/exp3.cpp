#include <iostream>
using namespace std;
int fib(int a)
{
    if (a == 0)
    {
        return 0;
    }
    if (a == 1)
    {
        return 1;
    }
    return (fib(a - 1) + fib(a - 2));
}
int main()
{
    int n, arr1[n], m, arr2[m];
    cout << "Enter the number of terms of fibbonacci series";
    cin >> n;

    cout << "The terms of fibonacci series are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << fib(i) << endl;
        arr1[i] = fib(i);
    }
    m = arr1[n - 1];

    for (int j = 0; j < m; j++)
    {
        arr2[j] = j;
    }
    cout << "The missing terms from the fibonacci series are: " << endl;
    for (int k = 0; k < m; k++)
    {
        for (int p = 0; p < n; p++)
        {
            if (arr2[k] != arr1[p])
            {
                cout << arr2[k] << endl;
            }
        }
    }
    return 0;
}