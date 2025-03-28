class Solution
{
public:
    int matrixScore(vector<vector<int>> &grid)
    {
        int r = grid.size();
        int c = grid[0].size();

        for (int i = 0; i < r; i++)
        {
            if (grid[i][0] == 1)
            {
                continue;
            }

            for (int j = 0; j < c; j++)
            {

                grid[i][j] = 1 - grid[i][j];
            }
        }

        int total = 0;
        int x = 1;

        for (int j = c - 1; j >= 0; j--)
        {

            int num_ones = 0;

            for (int i = 0; i < r; i++)
            {
                num_ones += grid[i][j];
            }

            num_ones = max(num_ones, (r - num_ones));
            total += num_ones * x;
            x = x * 2;
        }

        return total;
    }
};