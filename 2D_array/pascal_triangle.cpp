
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1

#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{

    return (n == 0) || (n == 1) ? 1 : n * fact(n - 1);
}

int main()
{
    int n = 5;

    // for (int i = 0; i < n;i++)
    // {
    //     for (int j = 0; j <=i;j++)
    //     {
    //         int ans = fact(i) / (fact(j) * (fact(i - j)));
    //         cout << ans << " ";
    //     }
    //     cout << endl;
    // }

    vector<vector<int>> a(5);

    for (int i = 0; i < n; i++)
    {
        a[i].resize(i + 1);
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                a[i][j] = 1;
            }
            else
            {
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            }
        }
    }

    for (auto i : a)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}