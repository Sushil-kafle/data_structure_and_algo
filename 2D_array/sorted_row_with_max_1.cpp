// Given a boolean 2D array, where each row is sorted.
// Find the row with the maximum number of 1s.
// Input : row = 3, cot = 4
// matrix[] = {{0 1 1 1},
//             {0 0 0 1},
//             {0 0 0 1}}
// OUtPUt: 0

#include <bits/stdc++.h>
using namespace std;

int main()
{

    // vector<vector<int>> a = {{0, 1, 1, 1},
    //                          {0, 0, 1, 1},
    //                          {1, 1, 1, 1}};

    vector<vector<int>> a = {{0, 0, 0, 0},
                             {1, 1, 1, 1},
                             {0, 1, 1, 1},
                             {0, 0, 1, 1}};

    int find = -1;
    // for (int i = 0; i < a[0].size(); i++)
    // {
    //     for (int j = 0; j < a.size(); j++)
    //     {
    //         if (a[j][i] == 1)
    //         {
    //             find = j;
    //             break;
    //         }
    //     }
    //     if (find != -1)
    //     {
    //         cout << find;
    //         break;
    //     }
    // }

    int i = 0;
    int j = a[0].size() - 1;

    while (j >= 0 and i < a.size())
    {
        if (a[i][j] == 1)
        {
            find = i;
            j--;
        }
        else
        {

            i++;
        }
    }

    if (find == -1)
    {
        cout << "not fond";
    }
    else
    {
        cout << find;
    }

    return 0;
}