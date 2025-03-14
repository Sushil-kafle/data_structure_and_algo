#include <bits/stdc++.h>
using namespace std;

int main()
{

    // vector<vector<int>> a = {{1, 2, 3, 4},
    //                          {5, 6, 7, 8},
    //                          {9, 10, 11, 12},
    //                          {13, 14, 15, 16}};

    vector<vector<int>> a = {{1, 2, 3},
                             {4, 5, 6},
                             {7, 8, 9}};

    for (int i = a.size() - 1; i >= 0; i--)
    {
        // travel from left to right

        for (int j = 0; j < a.size(); j++)
        {
            cout << a[i][j] << " ";
        }
        i--;
        
        if (i < 0)
        break;
        
        for (int j = a.size() - 1; j >= 0; j--)
        {
            cout << a[i][j] << " ";
        }
    }
    cout << endl;

    return 0;
}