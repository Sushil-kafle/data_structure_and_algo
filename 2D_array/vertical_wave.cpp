#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<int>> a = {{1, 2, 3},
                             {4, 5, 6},
                             {7, 8, 9}};

    for (int j = 0; j < a[0].size(); j++)
    {
        // travel from left to right

        for (int i = 0; i < a.size(); i++)
        {
            cout << a[i][j] << " ";
        }
        j++;

        if (j >= a[0].size())
            break;

        for (int i = a.size() - 1; i >= 0; i--)
        {
            cout << a[i][j] << " ";
        }
    }
    cout << endl;

    return 0;
}