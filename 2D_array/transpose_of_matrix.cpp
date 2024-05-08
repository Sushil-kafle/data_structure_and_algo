#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a[2][3] = {{1, 2, 3},
                   {3, 4, 6}};

    int ans[3][2];

    int row = 2, column = 3;
    for (int i = 0; i < row;i++)
    {
        for (int j = 0; j < column;j++)
        {
            ans[j][i] = a[i][j];
        }
    }

    for (int i = 0; i < column;i++)
    {
        for (int j = 0; j < row;j++)
        {
            cout << ans[i][j] << " ";
        }

        cout << endl;
    }

        return 0;
}