#include <bits/stdc++.h>
using namespace std;

int calculate_pos_infinite(vector<int> &nums)
{
    int low = 0;
    int high = nums.size() - 1;

    while(true)
    {
        int mid = low + (high - low) / 2;

        if(nums[mid]  )
                                                    
    }
}
int main()
{

    vector<int> nums = {1, 5, 7, 9, 6, 5, 2, 1, 0};

    cout << calculate_pos_infinite(nums) << endl;

    return 0;
}