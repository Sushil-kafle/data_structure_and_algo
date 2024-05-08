// Given a square matrix, turn it by 90 degrees in a clockwise direction without using any extra space.

// Input:matrix = [[1,2,3],
//                 [4,5,6],
//                 [7,8,9]]

// : Output: [[7,4,1],
//             [8,5,2],
//             [9,6,3]]

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<int>> a = {{1, 2, 3},
                             {4, 5, 6},
                             {7, 8, 9}};

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i + 1; j < a[0].size(); j++)
        {
            swap(a[i][j], a[j][i]);
        }
    }

    int index = a[0].size() - 1;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < (a[0].size() / 2); j++)
        {
            swap(a[i][j], a[i][index - j]);
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

    // j < i for for lower triangle
    // j = i+1 for upper triangle
    // j = 0 ; j < a[0].size()/2 for half matrix

    return 0;
}