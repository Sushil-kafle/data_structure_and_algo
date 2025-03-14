
// hint: put pos at even index and neg at odd index
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {

        vector<int> new_arr(nums.size());
        int even_index = 0;
        int odd_index = 1;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
            {
                new_arr[even_index] = nums[i];
                even_index += 2;
            }

            else
            {
                new_arr[odd_index] = nums[i];
                odd_index += 2;
            }
        }

        return new_arr;
    }
};

int main()
{

    Solution s1;

    vector<int> nums;
    int num;
    while (cin >> num && (nums.push_back(num), cin.get() != '\n'))
        ;

    nums = s1.rearrangeArray(nums);

    for (auto i : nums)
    {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}
