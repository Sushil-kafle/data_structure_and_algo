#include <bits/stdc++.h>
using namespace std;

int search_rotated_sort(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
            return mid;

        // left part is sorted
        else if (nums[mid] >= nums[low])
        {

            if (nums[low] > target && target < nums[mid])
                high = mid - 1;

            else
                low = mid + 1;
        }

        // right part is sorted
        else
        {
            if (target > nums[mid] && target < nums[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}
int main()
{

    vector<int> nums = {4, 5, 6, 7, 8, 1, 2, 3};

    int target = 8;

    cout << search_rotated_sort(nums, target) << endl;

    return 0;
}