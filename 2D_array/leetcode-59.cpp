class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {
        int r = n;
        int c = n;

        vector<vector<int>> result_matrix(r, vector<int>(c));

        int top = 0;
        int left = 0;
        int bottom = r - 1;
        int right = c - 1;

        int index = 1;

        while (top <= bottom && left <= right)
        {

            // left to right;
            for (int i = left; i <= right; i++)
            {
                result_matrix[top][i] = index;
                index++;
            }
            top++;

            // top to bottom
            for (int i = top; i <= bottom; i++)
            {
                result_matrix[i][right] = index;
                index++;
            }
            right--;

            // right to left
            if (top <= bottom)
            {

                for (int i = right; i >= left; i--)
                {
                    result_matrix[bottom][i] = index;
                    index++;
                }
                bottom--;
            }

            // bottom to top
            if (left <= right)
            {

                for (int i = bottom; i >= top; i--)
                {
                    result_matrix[i][left] = index;
                    index++;
                }
                left++;
            }
        }

        return result_matrix;
    }
};