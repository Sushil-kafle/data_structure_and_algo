#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {

        int idx = -1;

        for (int i = nums.size() - 2; i >= 0; i--)
        {
            if (nums[i] < nums[i + 1])
            {
                idx = i;
                break;
            }
        }

        int p = idx + 1;
        int q = nums.size() - 1;

        if (idx == -1)
        {
            p = 0;
        }

        while (q > p)
        {
            swap(nums[p], nums[q]);
            p++;
            q--;
        }

        p = idx;
        while (p < nums.size() && idx != -1)
        {
            if (nums[p] > nums[idx])
            {
                swap(nums[p], nums[idx]);
                break;
            }
            p++;
        }
    }
};

void printVector(const vector<int> &nums)
{
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;
}

int main()
{
    Solution sol;
    vector<int> nums;

    int num;
    while (cin >> num && (nums.push_back(num), cin.get() != '\n'))
        ;

    cout << "Original: ";
    printVector(nums);

    sol.nextPermutation(nums);

    cout << "Next Permutation: ";
    printVector(nums);

    return 0;
}
