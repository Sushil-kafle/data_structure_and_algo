// Given an nxm matrix 'a', return all elements of the matrix in spiral order

// Input:matrix = [[1,2,3],
//                 [4,5,6],
//                 [7,8,9]]

// : Output: [1,2,3,6,9,8,7,4,5],

#include <bits/stdc++.h>
using namespace std;

int main()

{

    vector<vector<int>> a = {{1, 2, 3,10},
                             {4, 5, 6,11},
                             {7, 8, 9,12}};

    int left = 0;
    int right = a[0].size() - 1;
    int top = 0;
    int bottom = a.size() - 1;

    while (left <= right || top <= bottom)
    {

        for (int j = left; j <= right; j++)
        {
            cout << a[top][j] << " ";
        }

        top++;

        for (int i = top; i <= bottom; i++)
        {
            cout << a[i][right] << " ";
        }
        right--;

        for (int j = right; j >= left; j--)
        {
            cout << a[bottom][j] << " ";
        }

        bottom--;

        for (int i = bottom; i >= top; i--)
        {
            cout << a[i][left] << " ";
        }

        left++;
    }

    return 0;
}