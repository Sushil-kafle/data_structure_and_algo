#include <bits/stdc++.h>
using namespace std;

int calculate_pos_infinite(vector<int> &nums, int target)
{
    int low = 0;
    int high = 1;

    while (true)
    {
        // create fake condition
        if (high >= nums.size())
            high = nums.size() - 1;

        if (nums[high] < target)
        {
            low = high + 1;
            high = 2 * high;
        }

        else if (nums[high] > target)
            break;

        else if (nums[high] == target)
            return high;
    }

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
            high = mid - 1;
        else if (nums[mid] < target)
            low = mid + 1;
    }

    return -1;
}
int main()
{

    // vector<int> nums = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 41, 42, 43, 44, 45, 46, 47};

    vector<int> nums = {1, 3, 5, 7, 9, 11, 15, 19, 23, 27, 31};
    int target = 9;

    cout << calculate_pos_infinite(nums, target) << endl;

    return 0;
}