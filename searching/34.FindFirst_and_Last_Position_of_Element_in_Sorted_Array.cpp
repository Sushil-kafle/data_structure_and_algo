
#include <bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int> &nums, int target)
{

    vector<int> arr(2, -1);

    int low = 0;
    int high = nums.size() - 1;
    int mid = 0;

    while (low <= high)
    {

        mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {

            if (mid > 0 && nums[mid - 1] == target)
                high = mid - 1;
            else
            {
                arr[0] = mid;
                break;
            }

            if (mid < nums.size() - 1 && nums[mid + 1] == target)
            {
                low =
            }
        }

        else if (nums[mid] > target)
            high = mid - 1;
        else if (nums[mid] < target)
            low = mid + 1;
    }

    low = 0;
    high = nums.size() - 1;

    while (low <= high)
    {

        mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {

            if (mid < nums.size() - 1 && nums[mid + 1] == target)
                low = mid + 1;
            else
            {
                arr[1] = mid;
                break;
            }
        }

        else if (nums[mid] > target)
            high = mid - 1;
        else if (nums[mid] < target)
            low = mid + 1;
    }

    return arr;
}

int main()
{

    vector<int> nums = {0, 1, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    vector<int> ans = searchRange(nums, 3);

    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}