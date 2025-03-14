class Solution
{
public:
    vector<vector<int>> transpose(vector<vector<int>> &matrix)
    {
        int r = matrix.size();
        int c = matrix[0].size();

        vector<vector<int>> matrix_transposed(c, vector<int>(r));

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                matrix_transposed[j][i] = matrix[i][j];
            }
        }

        return matrix_transposed;
    }
};