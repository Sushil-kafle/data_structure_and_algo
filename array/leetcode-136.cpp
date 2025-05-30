class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {

        if (nums.size() == 1)
            return nums[0];

        int solution = nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            solution = solution ^ nums[i];
        }

        return solution;
    }
};