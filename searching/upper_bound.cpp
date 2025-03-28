#include <bits/stdc++.h>
using namespace std;

int calculate_upper_bound(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;

    while (low <= high)
    {
        int mid = (low / 2) + (high / 2);

        if (nums[mid] == target)
            return mid;

        else if (nums[mid] < target)
            low = mid + 1;

        else if (nums[mid] > target)
            high = mid - 1;
    }
    if(low >= nums.size())
        return -1;
    return low;
    
}
int main()
{

    vector<int> v = {1, 3, 5, 10, 11, 16, 20, 22, 15};

    cout << calculate_upper_bound(v, 20) << endl;

    return 0;
}