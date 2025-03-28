#include <bits/stdc++.h>
using namespace std;

int calculate_lower_bound(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
            return mid;

        if (nums[mid] < target)
            low = mid + 1;

        if (nums[mid] > target)
            high = mid - 1;
    }

    return low;
}

int main()
{

    vector<int> v = {3, 5, 10, 11, 16, 20, 22, 15};

    cout << calculate_lower_bound(v, 2) << endl;

    return 0;
}