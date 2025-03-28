#include <bits/stdc++.h>
using namespace std;

int search_num(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;

    int answer = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
            return mid;

        if (nums[mid] > target)
            low = mid + 1;

        if (nums[mid] < target)
            high = mid - 1;
    }

    return answer;
}

int main()
{

    vector<int> nums = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    cout << search_num(nums, 4) << endl;

    return 0;
}