class Solution
{
public:
    int maxArea(vector<int> &height)
    {

        int left = 0;
        int right = height.size() - 1;

        int max = INT_MIN;
        int total_water = 0;

        while (left < right)
        {
            total_water = min(height[left], height[right]) * (right - left);

            if (total_water >= max)
                max = total_water;

            if (height[left] > height[right])
                right--;
            else
                left++;
        }

        return max;
    }
};