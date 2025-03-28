class Solution
{
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>> &mat)
    {

        vector<int> answer(2, 0);

        int count_1;

        for (int i = 0; i < mat.size(); i++)
        {
            count_1 = 0;

            for (int j = 0; j < mat[0].size(); j++)
            {
                count_1 += mat[i][j];
            }

            if (count_1 > answer[1])
            {
                answer[0] = i;
                answer[1] = count_1;
            }
        }

        return answer;
    }
};