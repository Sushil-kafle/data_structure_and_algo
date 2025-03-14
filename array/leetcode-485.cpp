class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {

        if (nums.size() == 1)
            return nums[0];

        int max = 0;
        int curr_max = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                curr_max++;
            }
            else
            {

                if (curr_max > max)
                {
                    max = curr_max;
                }
                curr_max = 0;
            }
        }
        if (curr_max > max)
        {
            max = curr_max;
        }

        return max;
    }
};