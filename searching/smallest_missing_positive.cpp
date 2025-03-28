#include <bits/stdc++.h>
using namespace std;

int find_missing_smallest(vector<int> &nums)
{
    int low = 0;
    int high = nums.size() - 1;

    int answer = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == mid)
            low = mid + 1;
        if (nums[mid] != mid)
        {
            answer = mid;
            high = mid - 1;
        }
    }

    return answer;
}

int main()
{

    // vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 10, 12};
    vector<int> nums = {0,1, 2, 3, 4, 5, 6, 7, 8,9, 10};

    cout << find_missing_smallest(nums) << endl;

    return 0;
}