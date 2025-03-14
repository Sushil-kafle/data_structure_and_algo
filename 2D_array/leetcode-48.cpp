class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {

        int row = matrix.size();
        int column = matrix[0].size();

        vector<int> answer(row * column);

        int top = 0;
        int right = column - 1;
        int bottom = row - 1;
        int left = 0;

        int index = 0;
        while (top <= bottom && left <= right)
        {
            // left to right
            for (int i = left; i <= right; i++)
            {
                answer[index] = matrix[top][i];
                index++;
            }
            top++;

            // top to bottom
            for (int i = top; i <= bottom; i++)
            {
                answer[index] = matrix[i][right];
                index++;
            }
            right--;

            // right to left
            if (top <= bottom)
            {

                for (int i = right; i >= left; i--)
                {

                    answer[index] = matrix[bottom][i];
                    index++;
                }
                bottom--;
            }

            // bottom to top
            if (left <= right)
            {

                for (int i = bottom; i >= top; i--)
                {

                    answer[index] = matrix[i][left];
                    index++;
                }
                left++;
            }
        }

        return answer;
    }
};