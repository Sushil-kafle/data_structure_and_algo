#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3;

    int a[n][n] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
                swap(a[i][j], a[j][i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}