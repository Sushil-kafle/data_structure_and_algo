#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a[2][3] = {{1, 2, 3},
                   {3, 4, 6}};
    int b[3][2] = {{5, 6},
                   {7, 8},
                   {9, 10}};

    int r1 = 2, r2 = 3, c1 = 3, c2 = 2;

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            int sum = 0;
            for (int k = 0; k < c1; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            cout << sum << endl;
        }
    }

    return 0;
}