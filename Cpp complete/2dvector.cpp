#include <bits/stdc++.h>
using namespace std;

int main()
{
    // in vectors number of rows are fixed but the number of col v aries
    // we can say that the length of the the vectors vary , and it behaves as  2d vector
    //  so if we want to vary the number of rows then we can use vector of vectors number
    int N;
    cin >> N;
    vector<vector<int>> v;

    int arrr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<string>> v2(3);

    vector<vector<int>> v1(N, vector<int>(2, 10)); // 2d vector of size N x 5 and all the elements are 10

    for (auto it : v1)
    {
        for (auto i : it)
        {
            cout << i << " ";
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arrr[i][j];
        }
    }

    return 0;
}