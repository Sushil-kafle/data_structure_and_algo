class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {

        int k = 0;
        int q = nums.size() - 1;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                swap(nums[k], nums[i]);
                k++;
            }
        }
    }
};