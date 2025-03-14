
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {

        vector<int> prev_max(height.size());
        vector<int> next_max(height.size());

        int max = -1;

        for (int i = 0; i < height.size(); i++)
        {
            prev_max[i] = max;
            if (height[i] > max)
                max = height[i];
        }

        max = -1;
        for (int i = height.size() - 1; i >= 0; i--)
        {
            next_max[i] = max;
            if (height[i] > max)
                max = height[i];
        }

        int sum = 0;

        for (int i = 1; i < height.size() - 1; i++)
        {

            next_max[i] = next_max[i] - height[i];
            prev_max[i] = prev_max[i] - height[i];

            if (prev_max[i] > 0 && next_max[i] > 0)
            {
                sum += min(prev_max[i], next_max[i]);
            }
        }

        return sum;
    }
};

int main()
{
    vector<int> height;
    int num;
    while (cin >> num && (height.push_back(num), cin.get() != '\n'))
        ;

    Solution sol;

    cout << sol.maxArea(height) << endl;

    return 0;
}
