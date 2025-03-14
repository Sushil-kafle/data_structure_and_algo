class Solution
{
public:
    void reverse(vector<int> &nums, int p, int q)
    {
        while (q > p)
        {
            swap(nums[p], nums[q]);
            p++;
            q--;
        }
    }

    bool check(vector<int> &nums)
    {

        if (nums.size() == 1)
            return true;

        int idx = -1;

        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                idx = i;
                break;
            }
        }

        if (idx == -1)
            return true;

        int p = 0;
        int q = idx;

        reverse(nums, p, q);

        p = idx + 1;
        q = nums.size() - 1;

        reverse(nums, p, q);

        p = 0;
        q = nums.size() - 1;

        reverse(nums, p, q);

        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                return false;
            }
        }

        return true;
    }
};