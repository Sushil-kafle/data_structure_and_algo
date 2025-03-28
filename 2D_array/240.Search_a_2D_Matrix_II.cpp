class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {

        int row = 0;
        int col = matrix[0].size() - 1;

        while (row < matrix.size() && col >= 0)
        {
            int high = matrix[row][col];

            if (high == target)
                return true;

            if (target > high)
            {
                row++;
            }
            else
            {
                col--;
            }
        }
        return false;
    }
};