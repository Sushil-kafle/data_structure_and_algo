class Solution
{
public:
    void reverse_array(vector<int> &nums, int i, int j)
    {
        while (j > i)
        {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }
    void rotate(vector<int> &nums, int k)
    {
        k = k % nums.size();

        if (k == 0)
            return;

        reverse_array(nums, 0, nums.size() - k - 1);

        reverse_array(nums, nums.size() - k, nums.size() - 1);

        reverse_array(nums, 0, nums.size() - 1);
    }
};