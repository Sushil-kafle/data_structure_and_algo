// mid decides

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {

        int a = 0;

        int c = nums.size() - 1;
        int b = 0;

        while (c >= b)
        {

            if (nums[b] == 0)
            {
                swap(nums[a], nums[b]);
                a++;
                b++;
            }
            else if (nums[b] == 2)
            {
                swap(nums[b], nums[c]);
                c--;
            }
            else
            {
                b++;
            }
        }
    }
};