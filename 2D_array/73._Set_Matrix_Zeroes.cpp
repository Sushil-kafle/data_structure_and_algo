class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {

        int first_col_zero = 0;

        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {

                if (matrix[i][j] == 0)
                {

                    if (j == 0)
                        first_col_zero = 1;

                    else
                    {

                        // for cols
                        matrix[i][0] = 0;
                        // for row
                        matrix[0][j] = 0;
                    }
                }
            }
        }

        for (int i = matrix.size() - 1; i >= 1; i--)
        {
            for (int j = matrix[0].size() - 1; j >= 1; j--)
            {

                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                {

                    matrix[i][j] = 0;
                }
            }
        }

        // handle first rows
        if (matrix[0][0] == 0)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                matrix[0][j] = 0;
            }
        }

        // handle first column
        if (first_col_zero == 1)
        {
            for (int i = 0; i < matrix.size(); i++)
            {
                matrix[i][0] = 0;
            }
        }
    }
};