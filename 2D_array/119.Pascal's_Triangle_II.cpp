class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {

        vector<int> answer(rowIndex + 1, 1);
        int64_t total;
        int64_t row = rowIndex;

        for (int64_t i = 1; i < answer.size(); i++)
        {
            total = answer[i - 1] * (row - i + 1) / i;
            answer[i] = total;
        }

        return answer;
    }
};