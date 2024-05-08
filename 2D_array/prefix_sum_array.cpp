// Given a matrix 'a' of dimension n x m and 2 coordinates(l1, r1) and (12, r2).Return the sum of the rectangle from(ll, rl) to(12, r2).

#include <bits/stdc++.h>
using namespace std;

int main()

{

    vector<vector<int>> a = {{1, 2, 3, 4},
                             {5, 6, 7, 8},
                             {9, 10, 11, 12}};

    int l1 = 1, r1 = 0;
    int l2 = 2, r2 = 1;

    for (int i = l1; i <= l2;i++)
    {
        for (int j = r1; j <= r2;j++)
        {
            cout << a[i][j] << " ";
        }
    }

        return 0;
}