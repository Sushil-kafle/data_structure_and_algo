#include <bits/stdc++.h>
using namespace std;

int calculate_last_occurance(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
        {

            if (mid < nums.size() - 1 && nums[mid + 1] == target)
                low = mid + 1;
            else
                return mid;
        }

        else if (nums[mid] < target)
            low = mid + 1;

        else if (nums[mid] > target)
            high = mid - 1;
    }

    return -1;
}
int main()
{

    vector<int> nums = {0, 1, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << calculate_last_occurance(nums, 3) << endl;

    return 0;
}