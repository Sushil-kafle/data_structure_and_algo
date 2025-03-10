// hint: fill from last

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {

        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        if (n == 0)
            return;

        while (i >= 0 && j >= 0)
        {
            if (nums1[i] > nums2[j])
            {
                nums1[k] = nums1[i];
                k--;
                i--;
            }

            else if (nums2[j] > nums1[i])
            {
                nums1[k] = nums2[j];
                k--;
                j--;
            }

            else
            {
                nums1[k] = nums2[j];
                j--;
                k--;
            }
        }

        while (j >= 0)
        {
            nums1[k] = nums2[j];
            j--;
            k--;
        }

        while (i >= 0)
        {
            nums1[k] = nums1[i];
            i--;
            k--;
        }
    }
};

int main()
{
    Solution solution;
    vector<int> nums1 = {0};
    int m = 0;
    vector<int> nums2 = {1};
    int n = 1;

    solution.merge(nums1, m, nums2, n);

    cout << "Merged array: ";
    for (int num : nums1)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}